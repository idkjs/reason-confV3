/* use bs to pull in logo asset. Asset .png file is a string,
   define log value as logoImport
   */
[@bs.module] external logoImport : string = "./assets/logo.svg";

[@bs.module] external nikImport : string = "./assets/nik.jpg";

[@bs.module] external patrickImport : string = "./assets/patrick.jpg";

[@bs.module] external andreyImport : string = "./assets/andrey.jpg";

let logo = logoImport;

let nik = nikImport;

let patrick = patrickImport;

let andrey = andreyImport;