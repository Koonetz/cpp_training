import { auth } from './firebase';

// Sign Up
export const doCreateUserWithEmailAndPassword = (email, password) =>
  auth.doCreateUserWithEmailAndPassword(email, password);

//Sign in
export const doSignInWithEmailAndPassword = (email, password) =>
  auth.doSignInWithEmailAndPassword(email, password);

//Sign Out
export const doSignOut = () =>
  auth.SignOut();

//Pass Reset
export const doPasswordReset = (email) =>
  auth.doPasswordReset(email);

//Pass Change
export const doPasswordChange = (password) =>
  auth.doPasswordChange(password);
