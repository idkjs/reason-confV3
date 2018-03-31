/* use bs to pull in logo asset. Asset .png file is a string,
   define log value as logoImport
   */
[@bs.module] external logoImport : string = "./assets/logo.svg";

[@bs.module] external nikImport : string = "./assets/nik.jpg";

[@bs.module] external patrickImport : string = "./assets/patrick.jpg";

[@bs.module] external andreyImport : string = "./assets/andrey.jpg";

[@bs.module] external chengLouImport : string = "./assets/cheng-lou.jpg";

[@bs.module] external keiraImport : string = "./assets/keira-hodgkison.jpg";

[@bs.module]
external lauraGaetanoImport : string = "./assets/laura-gaetano.jpg";

[@bs.module]
external cristianoCalcagnoImport : string = "./assets/cristiano-calcagno.jpg";

let logo = logoImport;

let nik = nikImport;

let andrey = andreyImport;

let patrick = patrickImport;

let keiraHodgkison = keiraImport;

let chengLou = chengLouImport;

let lauraGaetano = lauraGaetanoImport;

let cristianoCalcagno = cristianoCalcagnoImport;