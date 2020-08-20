#!/usr/bin/node
const request = require('request');

request.get(`http://swapi.co/api/films/${process.argv[2]}`, async (error, response, body) => {
  if (error) {
    console.log(error);
    return;
  }
  const CharactersList = JSON.parse(body).characters;
  for (let a = 0; a < CharactersList.length; a++) {
    const name = await nameRequest(CharactersList[a]);
    console.log(name);
  }
});

function nameRequest (charUrl) {
  const name = new Promise(
    (resolve, reject) => {
      request(charUrl, (error, response, body) => {
        if (error) {
          console.error('error:', error)
        }
        resolve(JSON.parse(body).name);
      });
    });
  return name;
}