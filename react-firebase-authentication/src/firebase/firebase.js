import firebase from 'firebase/app';
import 'firebase/auth';

const config = {
  apiKey: "AIzaSyD92IFeG49kncg3SlmTuEWM9CfrnSG8kig",
  authDomain: "seehow2018.firebaseapp,com",
  databaseURL: "https://seehow2018.firebaseio.com",
  projectId: "seehow2018",
  storageBucket: "seehow2018.appspot.com",
  messagingSenderId: "981094140247"
};

if (!firebase.apps.length) {
  firebase.initializeApp(config);
}

const auth = firebase.auth();

export {
  auth,
};
