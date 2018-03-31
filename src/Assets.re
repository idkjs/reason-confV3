/* use bs to pull in logo asset. Asset .png file is a string,
   define log value as logoImport
   */
[@bs.module] external logoImport : string = "./assets/logo.svg";

let logo = logoImport;