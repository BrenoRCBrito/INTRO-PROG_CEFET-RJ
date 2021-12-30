function teste() {
  const a = 'Testando';
  const b = '...';
  for(let i = 1; i < 4; i += 1) {
    let message = `${a} ${i}`
    if(i === 3) message += b;
    console.log(message);
  }
}

teste();
