copy(`# [${document.querySelector('.title > h1').textContent.trim()}](${document.location.href})\n\n` +
[...document.querySelectorAll('.discussion-post')].map(post => {
  let d = new Date(post.querySelector('.header > i > span').title);
  let ds = `${d.getUTCFullYear()}-${('00'+(d.getUTCMonth()+1)).slice(-2)}-${('00'+d.getUTCDate()).slice(-2)} ${('00'+d.getUTCHours()).slice(-2)}:${('00'+d.getUTCMinutes()).slice(-2)} +0000`;
  return {
    url: `${document.location.href}#${post.id}`,
    user: post.querySelector('.header > .user-mention').textContent.trim(),
    time: ds,
    content: [...post.querySelectorAll('.markdown_content > p')].map(p=>p.textContent).join`\n`,
  };
}).map(post =>
  `${post.user} at [${post.time}](${post.url}):\n\n${
    post.content
      .split`\n`.reduce((acc, line) => acc === '' ? line : acc + (acc.endsWith('\n') ? '' : '  ') + '\n' + line, '')
      .split`\n`.map(line => `> ${line}\n`).join``
  }`
).join`\n`)
