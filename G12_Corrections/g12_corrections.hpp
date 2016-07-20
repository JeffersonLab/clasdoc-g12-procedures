/*  This header file purpose is to correct the g12 experiement  *
 *  Please read each sections descritption for use              *
 *                                                              *
 *   Author: Michael C. Kunkel (for unified script)             */

#ifndef __CLAS_G12_COR_HPP__
#define __CLAS_G12_COR_HPP__

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace clas
{
  namespace g12 {
    using std::clog;
    using std::endl;
    using std::ifstream;
    using std::fmod;
    using std::getline;
    using std::string;
    using std::stringstream;
    using std::vector;
    TString Pim_Hist_num(Double_t, Double_t);
    TString Pip_Hist_num(Double_t, Double_t);
    TString Prot_Hist_num(Double_t, Double_t);
    
    TString correction_dir="/Users/michaelkunkel/WORK/CLAS/CLAS6/CODES/G12_NECCESSITIES/All_Corrections/";
    
    
    //################################## BEAM CORRECTION ##################################
    //Corrections were derived from the p pi_plus pi_minus exclusive reaction
    //Input: Run number, beam photon energy
    //Output: Corrected beam photon energy
    
    //Updated: June 7, 2012
    
    //Corrections were done by Michael C. Kunkel
    //mkunkel@jlab.org
    double corrected_beam_energy(int run, double uncorrected_beam_energy){
      double ret = 0;
      if(run == 56363){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997942;
        ret = E_gamma_new;
      }
      else if(run == 56365){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.996246;
        ret = E_gamma_new;
      }
      else if(run == 56369){
        double E_scattered = 5.68436 - uncorrected_beam_energy;
        double E_gamma_new = 5.68436 - E_scattered*0.995988;
        ret = E_gamma_new;
      }
      else if(run == 56384){
        double E_scattered = 5.71141 - uncorrected_beam_energy;
        double E_gamma_new = 5.71141 - E_scattered*0.996996;
        ret = E_gamma_new;
      }
      else if(run == 56386){
        double E_scattered = 5.71048 - uncorrected_beam_energy;
        double E_gamma_new = 5.71048 - E_scattered*0.996971;
        ret = E_gamma_new;
      }
      else if(run == 56401){
        double E_scattered = 5.7416 - uncorrected_beam_energy;
        double E_gamma_new = 5.7416 - E_scattered*0.997435;
        ret = E_gamma_new;
      }
      else if(run == 56403){
        double E_scattered = 5.74294 - uncorrected_beam_energy;
        double E_gamma_new = 5.74294 - E_scattered*0.997747;
        ret = E_gamma_new;
      }
      else if(run == 56404){
        double E_scattered = 5.75506 - uncorrected_beam_energy;
        double E_gamma_new = 5.75506 - E_scattered*0.998692;
        ret = E_gamma_new;
      }
      else if(run == 56405){
        double E_scattered = 5.7574 - uncorrected_beam_energy;
        double E_gamma_new = 5.7574 - E_scattered*0.998753;
        ret = E_gamma_new;
      }
      else if(run == 56406){
        double E_scattered = 5.71479 - uncorrected_beam_energy;
        double E_gamma_new = 5.71479 - E_scattered*0.996315;
        ret = E_gamma_new;
      }
      else if(run == 56408){
        double E_scattered = 5.71479 - uncorrected_beam_energy;
        double E_gamma_new = 5.71479 - E_scattered*0.995965;
        ret = E_gamma_new;
      }
      else if(run == 56410){
        double E_scattered = 5.7246 - uncorrected_beam_energy;
        double E_gamma_new = 5.7246 - E_scattered*0.996965;
        ret = E_gamma_new;
      }
      else if(run == 56420){
        double E_scattered = 5.7246 - uncorrected_beam_energy;
        double E_gamma_new = 5.7246 - E_scattered*0.997612;
        ret = E_gamma_new;
      }
      else if(run == 56421){
        double E_scattered = 5.7246 - uncorrected_beam_energy;
        double E_gamma_new = 5.7246 - E_scattered*0.996465;
        ret = E_gamma_new;
      }
      else if(run == 56422){
        double E_scattered = 5.74235 - uncorrected_beam_energy;
        double E_gamma_new = 5.74235 - E_scattered*0.997511;
        ret = E_gamma_new;
      }
      else if(run == 56435){
        double E_scattered = 5.71543 - uncorrected_beam_energy;
        double E_gamma_new = 5.71543 - E_scattered*0.995574;
        ret = E_gamma_new;
      }
      else if(run == 56436){
        double E_scattered = 5.7162 - uncorrected_beam_energy;
        double E_gamma_new = 5.7162 - E_scattered*0.996023;
        ret = E_gamma_new;
      }
      else if(run == 56441){
        double E_scattered = 5.71571 - uncorrected_beam_energy;
        double E_gamma_new = 5.71571 - E_scattered*0.99651;
        ret = E_gamma_new;
      }
      else if(run == 56442){
        double E_scattered = 5.71611 - uncorrected_beam_energy;
        double E_gamma_new = 5.71611 - E_scattered*0.996479;
        ret = E_gamma_new;
      }
      else if(run == 56443){
        double E_scattered = 5.71548 - uncorrected_beam_energy;
        double E_gamma_new = 5.71548 - E_scattered*0.99648;
        ret = E_gamma_new;
      }
      else if(run == 56445){
        double E_scattered = 5.71578 - uncorrected_beam_energy;
        double E_gamma_new = 5.71578 - E_scattered*0.996491;
        ret = E_gamma_new;
      }
      else if(run == 56446){
        double E_scattered = 5.71578 - uncorrected_beam_energy;
        double E_gamma_new = 5.71578 - E_scattered*0.994837;
        ret = E_gamma_new;
      }
      else if(run == 56447){
        double E_scattered = 5.71583 - uncorrected_beam_energy;
        double E_gamma_new = 5.71583 - E_scattered*0.996164;
        ret = E_gamma_new;
      }
      else if(run == 56448){
        double E_scattered = 5.7156 - uncorrected_beam_energy;
        double E_gamma_new = 5.7156 - E_scattered*0.995801;
        ret = E_gamma_new;
      }
      else if(run == 56449){
        double E_scattered = 5.71581 - uncorrected_beam_energy;
        double E_gamma_new = 5.71581 - E_scattered*0.995676;
        ret = E_gamma_new;
      }
      else if(run == 56450){
        double E_scattered = 5.71733 - uncorrected_beam_energy;
        double E_gamma_new = 5.71733 - E_scattered*0.995902;
        ret = E_gamma_new;
      }
      else if(run == 56453){
        double E_scattered = 5.717 - uncorrected_beam_energy;
        double E_gamma_new = 5.717 - E_scattered*0.99608;
        ret = E_gamma_new;
      }
      else if(run == 56454){
        double E_scattered = 5.7173 - uncorrected_beam_energy;
        double E_gamma_new = 5.7173 - E_scattered*0.995104;
        ret = E_gamma_new;
      }
      else if(run == 56455){
        double E_scattered = 5.71709 - uncorrected_beam_energy;
        double E_gamma_new = 5.71709 - E_scattered*0.995819;
        ret = E_gamma_new;
      }
      else if(run == 56456){
        double E_scattered = 5.7174 - uncorrected_beam_energy;
        double E_gamma_new = 5.7174 - E_scattered*0.994909;
        ret = E_gamma_new;
      }
      else if(run == 56457){
        double E_scattered = 5.7174 - uncorrected_beam_energy;
        double E_gamma_new = 5.7174 - E_scattered*0.995918;
        ret = E_gamma_new;
      }
      else if(run == 56458){
        double E_scattered = 5.72061 - uncorrected_beam_energy;
        double E_gamma_new = 5.72061 - E_scattered*0.996474;
        ret = E_gamma_new;
      }
      else if(run == 56459){
        double E_scattered = 5.72226 - uncorrected_beam_energy;
        double E_gamma_new = 5.72226 - E_scattered*0.996352;
        ret = E_gamma_new;
      }
      else if(run == 56460){
        double E_scattered = 5.71832 - uncorrected_beam_energy;
        double E_gamma_new = 5.71832 - E_scattered*0.996672;
        ret = E_gamma_new;
      }
      else if(run == 56461){
        double E_scattered = 5.71731 - uncorrected_beam_energy;
        double E_gamma_new = 5.71731 - E_scattered*0.996044;
        ret = E_gamma_new;
      }
      else if(run == 56462){
        double E_scattered = 5.71653 - uncorrected_beam_energy;
        double E_gamma_new = 5.71653 - E_scattered*0.995326;
        ret = E_gamma_new;
      }
      else if(run == 56465){
        double E_scattered = 5.71616 - uncorrected_beam_energy;
        double E_gamma_new = 5.71616 - E_scattered*0.996238;
        ret = E_gamma_new;
      }
      else if(run == 56467){
        double E_scattered = 5.7174 - uncorrected_beam_energy;
        double E_gamma_new = 5.7174 - E_scattered*0.995519;
        ret = E_gamma_new;
      }
      else if(run == 56468){
        double E_scattered = 5.71741 - uncorrected_beam_energy;
        double E_gamma_new = 5.71741 - E_scattered*0.994413;
        ret = E_gamma_new;
      }
      else if(run == 56469){
        double E_scattered = 5.71713 - uncorrected_beam_energy;
        double E_gamma_new = 5.71713 - E_scattered*0.995584;
        ret = E_gamma_new;
      }
      else if(run == 56470){
        double E_scattered = 5.71696 - uncorrected_beam_energy;
        double E_gamma_new = 5.71696 - E_scattered*0.995532;
        ret = E_gamma_new;
      }
      else if(run == 56471){
        double E_scattered = 5.71668 - uncorrected_beam_energy;
        double E_gamma_new = 5.71668 - E_scattered*0.996027;
        ret = E_gamma_new;
      }
      else if(run == 56472){
        double E_scattered = 5.71694 - uncorrected_beam_energy;
        double E_gamma_new = 5.71694 - E_scattered*0.99621;
        ret = E_gamma_new;
      }
      else if(run == 56476){
        double E_scattered = 5.71303 - uncorrected_beam_energy;
        double E_gamma_new = 5.71303 - E_scattered*0.997191;
        ret = E_gamma_new;
      }
      else if(run == 56478){
        double E_scattered = 5.71227 - uncorrected_beam_energy;
        double E_gamma_new = 5.71227 - E_scattered*0.997087;
        ret = E_gamma_new;
      }
      else if(run == 56479){
        double E_scattered = 5.71298 - uncorrected_beam_energy;
        double E_gamma_new = 5.71298 - E_scattered*0.997148;
        ret = E_gamma_new;
      }
      else if(run == 56480){
        double E_scattered = 5.71452 - uncorrected_beam_energy;
        double E_gamma_new = 5.71452 - E_scattered*0.997387;
        ret = E_gamma_new;
      }
      else if(run == 56481){
        double E_scattered = 5.71452 - uncorrected_beam_energy;
        double E_gamma_new = 5.71452 - E_scattered*0.996949;
        ret = E_gamma_new;
      }
      else if(run == 56482){
        double E_scattered = 5.71209 - uncorrected_beam_energy;
        double E_gamma_new = 5.71209 - E_scattered*0.996923;
        ret = E_gamma_new;
      }
      else if(run == 56483){
        double E_scattered = 5.7121 - uncorrected_beam_energy;
        double E_gamma_new = 5.7121 - E_scattered*0.99693;
        ret = E_gamma_new;
      }
      else if(run == 56485){
        double E_scattered = 5.71223 - uncorrected_beam_energy;
        double E_gamma_new = 5.71223 - E_scattered*0.997183;
        ret = E_gamma_new;
      }
      else if(run == 56486){
        double E_scattered = 5.71223 - uncorrected_beam_energy;
        double E_gamma_new = 5.71223 - E_scattered*0.996961;
        ret = E_gamma_new;
      }
      else if(run == 56487){
        double E_scattered = 5.71279 - uncorrected_beam_energy;
        double E_gamma_new = 5.71279 - E_scattered*0.997184;
        ret = E_gamma_new;
      }
      else if(run == 56489){
        double E_scattered = 5.71176 - uncorrected_beam_energy;
        double E_gamma_new = 5.71176 - E_scattered*0.997078;
        ret = E_gamma_new;
      }
      else if(run == 56490){
        double E_scattered = 5.71175 - uncorrected_beam_energy;
        double E_gamma_new = 5.71175 - E_scattered*0.996366;
        ret = E_gamma_new;
      }
      else if(run == 56499){
        double E_scattered = 5.7116 - uncorrected_beam_energy;
        double E_gamma_new = 5.7116 - E_scattered*0.997012;
        ret = E_gamma_new;
      }
      else if(run == 56501){
        double E_scattered = 5.71118 - uncorrected_beam_energy;
        double E_gamma_new = 5.71118 - E_scattered*0.997096;
        ret = E_gamma_new;
      }
      else if(run == 56502){
        double E_scattered = 5.71458 - uncorrected_beam_energy;
        double E_gamma_new = 5.71458 - E_scattered*0.996106;
        ret = E_gamma_new;
      }
      else if(run == 56503){
        double E_scattered = 5.71468 - uncorrected_beam_energy;
        double E_gamma_new = 5.71468 - E_scattered*0.996174;
        ret = E_gamma_new;
      }
      else if(run == 56504){
        double E_scattered = 5.71475 - uncorrected_beam_energy;
        double E_gamma_new = 5.71475 - E_scattered*0.996286;
        ret = E_gamma_new;
      }
      else if(run == 56505){
        double E_scattered = 5.7153 - uncorrected_beam_energy;
        double E_gamma_new = 5.7153 - E_scattered*0.995905;
        ret = E_gamma_new;
      }
      else if(run == 56506){
        double E_scattered = 5.7153 - uncorrected_beam_energy;
        double E_gamma_new = 5.7153 - E_scattered*0.996172;
        ret = E_gamma_new;
      }
      else if(run == 56508){
        double E_scattered = 5.7153 - uncorrected_beam_energy;
        double E_gamma_new = 5.7153 - E_scattered*0.996752;
        ret = E_gamma_new;
      }
      else if(run == 56509){
        double E_scattered = 5.71333 - uncorrected_beam_energy;
        double E_gamma_new = 5.71333 - E_scattered*0.996561;
        ret = E_gamma_new;
      }
      else if(run == 56510){
        double E_scattered = 5.71455 - uncorrected_beam_energy;
        double E_gamma_new = 5.71455 - E_scattered*0.99702;
        ret = E_gamma_new;
      }
      else if(run == 56513){
        double E_scattered = 5.71373 - uncorrected_beam_energy;
        double E_gamma_new = 5.71373 - E_scattered*0.996505;
        ret = E_gamma_new;
      }
      else if(run == 56514){
        double E_scattered = 5.71445 - uncorrected_beam_energy;
        double E_gamma_new = 5.71445 - E_scattered*0.996591;
        ret = E_gamma_new;
      }
      else if(run == 56515){
        double E_scattered = 5.71283 - uncorrected_beam_energy;
        double E_gamma_new = 5.71283 - E_scattered*0.996658;
        ret = E_gamma_new;
      }
      else if(run == 56516){
        double E_scattered = 5.71357 - uncorrected_beam_energy;
        double E_gamma_new = 5.71357 - E_scattered*0.99621;
        ret = E_gamma_new;
      }
      else if(run == 56517){
        double E_scattered = 5.71409 - uncorrected_beam_energy;
        double E_gamma_new = 5.71409 - E_scattered*0.996724;
        ret = E_gamma_new;
      }
      else if(run == 56519){
        double E_scattered = 5.71595 - uncorrected_beam_energy;
        double E_gamma_new = 5.71595 - E_scattered*0.995108;
        ret = E_gamma_new;
      }
      else if(run == 56520){
        double E_scattered = 5.71355 - uncorrected_beam_energy;
        double E_gamma_new = 5.71355 - E_scattered*0.996536;
        ret = E_gamma_new;
      }
      else if(run == 56521){
        double E_scattered = 5.71393 - uncorrected_beam_energy;
        double E_gamma_new = 5.71393 - E_scattered*0.996239;
        ret = E_gamma_new;
      }
      else if(run == 56522){
        double E_scattered = 5.71393 - uncorrected_beam_energy;
        double E_gamma_new = 5.71393 - E_scattered*0.996639;
        ret = E_gamma_new;
      }
      else if(run == 56523){
        double E_scattered = 5.71392 - uncorrected_beam_energy;
        double E_gamma_new = 5.71392 - E_scattered*0.996428;
        ret = E_gamma_new;
      }
      else if(run == 56524){
        double E_scattered = 5.71466 - uncorrected_beam_energy;
        double E_gamma_new = 5.71466 - E_scattered*0.996483;
        ret = E_gamma_new;
      }
      else if(run == 56525){
        double E_scattered = 5.7133 - uncorrected_beam_energy;
        double E_gamma_new = 5.7133 - E_scattered*0.997143;
        ret = E_gamma_new;
      }
      else if(run == 56526){
        double E_scattered = 5.71402 - uncorrected_beam_energy;
        double E_gamma_new = 5.71402 - E_scattered*0.996094;
        ret = E_gamma_new;
      }
      else if(run == 56527){
        double E_scattered = 5.71393 - uncorrected_beam_energy;
        double E_gamma_new = 5.71393 - E_scattered*0.996361;
        ret = E_gamma_new;
      }
      else if(run == 56528){
        double E_scattered = 5.71402 - uncorrected_beam_energy;
        double E_gamma_new = 5.71402 - E_scattered*0.996597;
        ret = E_gamma_new;
      }
      else if(run == 56529){
        double E_scattered = 5.7146 - uncorrected_beam_energy;
        double E_gamma_new = 5.7146 - E_scattered*0.996366;
        ret = E_gamma_new;
      }
      else if(run == 56530){
        double E_scattered = 5.71393 - uncorrected_beam_energy;
        double E_gamma_new = 5.71393 - E_scattered*0.996524;
        ret = E_gamma_new;
      }
      else if(run == 56531){
        double E_scattered = 5.71404 - uncorrected_beam_energy;
        double E_gamma_new = 5.71404 - E_scattered*0.996477;
        ret = E_gamma_new;
      }
      else if(run == 56532){
        double E_scattered = 5.7138 - uncorrected_beam_energy;
        double E_gamma_new = 5.7138 - E_scattered*0.997222;
        ret = E_gamma_new;
      }
      else if(run == 56533){
        double E_scattered = 5.7139 - uncorrected_beam_energy;
        double E_gamma_new = 5.7139 - E_scattered*0.996217;
        ret = E_gamma_new;
      }
      else if(run == 56534){
        double E_scattered = 5.71387 - uncorrected_beam_energy;
        double E_gamma_new = 5.71387 - E_scattered*0.996164;
        ret = E_gamma_new;
      }
      else if(run == 56535){
        double E_scattered = 5.71306 - uncorrected_beam_energy;
        double E_gamma_new = 5.71306 - E_scattered*0.995909;
        ret = E_gamma_new;
      }
      else if(run == 56536){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.996113;
        ret = E_gamma_new;
      }
      else if(run == 56537){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.996566;
        ret = E_gamma_new;
      }
      else if(run == 56538){
        double E_scattered = 5.71393 - uncorrected_beam_energy;
        double E_gamma_new = 5.71393 - E_scattered*0.996402;
        ret = E_gamma_new;
      }
      else if(run == 56539){
        double E_scattered = 5.7135 - uncorrected_beam_energy;
        double E_gamma_new = 5.7135 - E_scattered*0.996222;
        ret = E_gamma_new;
      }
      else if(run == 56540){
        double E_scattered = 5.71758 - uncorrected_beam_energy;
        double E_gamma_new = 5.71758 - E_scattered*0.997044;
        ret = E_gamma_new;
      }
      else if(run == 56541){
        double E_scattered = 5.71506 - uncorrected_beam_energy;
        double E_gamma_new = 5.71506 - E_scattered*0.996206;
        ret = E_gamma_new;
      }
      else if(run == 56542){
        double E_scattered = 5.71408 - uncorrected_beam_energy;
        double E_gamma_new = 5.71408 - E_scattered*0.996108;
        ret = E_gamma_new;
      }
      else if(run == 56544){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.995668;
        ret = E_gamma_new;
      }
      else if(run == 56545){
        double E_scattered = 5.71267 - uncorrected_beam_energy;
        double E_gamma_new = 5.71267 - E_scattered*0.996235;
        ret = E_gamma_new;
      }
      else if(run == 56546){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.996336;
        ret = E_gamma_new;
      }
      else if(run == 56547){
        double E_scattered = 5.71393 - uncorrected_beam_energy;
        double E_gamma_new = 5.71393 - E_scattered*0.996144;
        ret = E_gamma_new;
      }
      else if(run == 56548){
        double E_scattered = 5.71354 - uncorrected_beam_energy;
        double E_gamma_new = 5.71354 - E_scattered*0.996294;
        ret = E_gamma_new;
      }
      else if(run == 56549){
        double E_scattered = 5.71288 - uncorrected_beam_energy;
        double E_gamma_new = 5.71288 - E_scattered*0.996271;
        ret = E_gamma_new;
      }
      else if(run == 56550){
        double E_scattered = 5.71289 - uncorrected_beam_energy;
        double E_gamma_new = 5.71289 - E_scattered*0.996369;
        ret = E_gamma_new;
      }
      else if(run == 56555){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.996216;
        ret = E_gamma_new;
      }
      else if(run == 56556){
        double E_scattered = 5.71383 - uncorrected_beam_energy;
        double E_gamma_new = 5.71383 - E_scattered*0.996713;
        ret = E_gamma_new;
      }
      else if(run == 56559){
        double E_scattered = 5.7155 - uncorrected_beam_energy;
        double E_gamma_new = 5.7155 - E_scattered*0.996437;
        ret = E_gamma_new;
      }
      else if(run == 56561){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.995985;
        ret = E_gamma_new;
      }
      else if(run == 56562){
        double E_scattered = 5.7123 - uncorrected_beam_energy;
        double E_gamma_new = 5.7123 - E_scattered*0.997588;
        ret = E_gamma_new;
      }
      else if(run == 56563){
        double E_scattered = 5.71287 - uncorrected_beam_energy;
        double E_gamma_new = 5.71287 - E_scattered*0.997283;
        ret = E_gamma_new;
      }
      else if(run == 56564){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997457;
        ret = E_gamma_new;
      }
      else if(run == 56573){
        double E_scattered = 5.71415 - uncorrected_beam_energy;
        double E_gamma_new = 5.71415 - E_scattered*0.997052;
        ret = E_gamma_new;
      }
      else if(run == 56574){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997439;
        ret = E_gamma_new;
      }
      else if(run == 56575){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997097;
        ret = E_gamma_new;
      }
      else if(run == 56576){
        double E_scattered = 5.71392 - uncorrected_beam_energy;
        double E_gamma_new = 5.71392 - E_scattered*0.99705;
        ret = E_gamma_new;
      }
      else if(run == 56577){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.996992;
        ret = E_gamma_new;
      }
      else if(run == 56578){
        double E_scattered = 5.71381 - uncorrected_beam_energy;
        double E_gamma_new = 5.71381 - E_scattered*0.99709;
        ret = E_gamma_new;
      }
      else if(run == 56579){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997416;
        ret = E_gamma_new;
      }
      else if(run == 56580){
        double E_scattered = 5.712 - uncorrected_beam_energy;
        double E_gamma_new = 5.712 - E_scattered*0.997735;
        ret = E_gamma_new;
      }
      else if(run == 56581){
        double E_scattered = 5.7141 - uncorrected_beam_energy;
        double E_gamma_new = 5.7141 - E_scattered*0.997062;
        ret = E_gamma_new;
      }
      else if(run == 56582){
        double E_scattered = 5.71345 - uncorrected_beam_energy;
        double E_gamma_new = 5.71345 - E_scattered*0.997156;
        ret = E_gamma_new;
      }
      else if(run == 56583){
        double E_scattered = 5.71397 - uncorrected_beam_energy;
        double E_gamma_new = 5.71397 - E_scattered*0.997138;
        ret = E_gamma_new;
      }
      else if(run == 56585){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997118;
        ret = E_gamma_new;
      }
      else if(run == 56586){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997148;
        ret = E_gamma_new;
      }
      else if(run == 56587){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997232;
        ret = E_gamma_new;
      }
      else if(run == 56588){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997114;
        ret = E_gamma_new;
      }
      else if(run == 56589){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997007;
        ret = E_gamma_new;
      }
      else if(run == 56590){
        double E_scattered = 5.71444 - uncorrected_beam_energy;
        double E_gamma_new = 5.71444 - E_scattered*0.997109;
        ret = E_gamma_new;
      }
      else if(run == 56591){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997296;
        ret = E_gamma_new;
      }
      else if(run == 56592){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997054;
        ret = E_gamma_new;
      }
      else if(run == 56593){
        double E_scattered = 5.71403 - uncorrected_beam_energy;
        double E_gamma_new = 5.71403 - E_scattered*0.996945;
        ret = E_gamma_new;
      }
      else if(run == 56605){
        double E_scattered = 5.71399 - uncorrected_beam_energy;
        double E_gamma_new = 5.71399 - E_scattered*0.997163;
        ret = E_gamma_new;
      }
      else if(run == 56608){
        double E_scattered = 5.71423 - uncorrected_beam_energy;
        double E_gamma_new = 5.71423 - E_scattered*0.997385;
        ret = E_gamma_new;
      }
      else if(run == 56609){
        double E_scattered = 5.71397 - uncorrected_beam_energy;
        double E_gamma_new = 5.71397 - E_scattered*0.997136;
        ret = E_gamma_new;
      }
      else if(run == 56610){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997215;
        ret = E_gamma_new;
      }
      else if(run == 56611){
        double E_scattered = 5.71407 - uncorrected_beam_energy;
        double E_gamma_new = 5.71407 - E_scattered*0.997199;
        ret = E_gamma_new;
      }
      else if(run == 56612){
        double E_scattered = 5.71478 - uncorrected_beam_energy;
        double E_gamma_new = 5.71478 - E_scattered*0.997152;
        ret = E_gamma_new;
      }
      else if(run == 56614){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997203;
        ret = E_gamma_new;
      }
      else if(run == 56615){
        double E_scattered = 5.71456 - uncorrected_beam_energy;
        double E_gamma_new = 5.71456 - E_scattered*0.997159;
        ret = E_gamma_new;
      }
      else if(run == 56616){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997353;
        ret = E_gamma_new;
      }
      else if(run == 56617){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997199;
        ret = E_gamma_new;
      }
      else if(run == 56618){
        double E_scattered = 5.71396 - uncorrected_beam_energy;
        double E_gamma_new = 5.71396 - E_scattered*0.9972;
        ret = E_gamma_new;
      }
      else if(run == 56619){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.996857;
        ret = E_gamma_new;
      }
      else if(run == 56620){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.996932;
        ret = E_gamma_new;
      }
      else if(run == 56621){
        double E_scattered = 5.71399 - uncorrected_beam_energy;
        double E_gamma_new = 5.71399 - E_scattered*0.997046;
        ret = E_gamma_new;
      }
      else if(run == 56622){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997042;
        ret = E_gamma_new;
      }
      else if(run == 56623){
        double E_scattered = 5.71395 - uncorrected_beam_energy;
        double E_gamma_new = 5.71395 - E_scattered*0.997285;
        ret = E_gamma_new;
      }
      else if(run == 56624){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997294;
        ret = E_gamma_new;
      }
      else if(run == 56625){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997303;
        ret = E_gamma_new;
      }
      else if(run == 56626){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.997183;
        ret = E_gamma_new;
      }
      else if(run == 56627){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997134;
        ret = E_gamma_new;
      }
      else if(run == 56628){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997133;
        ret = E_gamma_new;
      }
      else if(run == 56630){
        double E_scattered = 5.71399 - uncorrected_beam_energy;
        double E_gamma_new = 5.71399 - E_scattered*0.997211;
        ret = E_gamma_new;
      }
      else if(run == 56631){
        double E_scattered = 5.71537 - uncorrected_beam_energy;
        double E_gamma_new = 5.71537 - E_scattered*0.997332;
        ret = E_gamma_new;
      }
      else if(run == 56632){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997242;
        ret = E_gamma_new;
      }
      else if(run == 56633){
        double E_scattered = 5.71483 - uncorrected_beam_energy;
        double E_gamma_new = 5.71483 - E_scattered*0.997443;
        ret = E_gamma_new;
      }
      else if(run == 56634){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997315;
        ret = E_gamma_new;
      }
      else if(run == 56635){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997968;
        ret = E_gamma_new;
      }
      else if(run == 56636){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.997068;
        ret = E_gamma_new;
      }
      else if(run == 56637){
        double E_scattered = 5.7136 - uncorrected_beam_energy;
        double E_gamma_new = 5.7136 - E_scattered*0.998167;
        ret = E_gamma_new;
      }
      else if(run == 56638){
        double E_scattered = 5.71398 - uncorrected_beam_energy;
        double E_gamma_new = 5.71398 - E_scattered*0.99707;
        ret = E_gamma_new;
      }
      else if(run == 56639){
        double E_scattered = 5.714 - uncorrected_beam_energy;
        double E_gamma_new = 5.714 - E_scattered*0.998179;
        ret = E_gamma_new;
      }
      else if(run == 56640){
        double E_scattered = 5.71396 - uncorrected_beam_energy;
        double E_gamma_new = 5.71396 - E_scattered*0.99725;
        ret = E_gamma_new;
      }
      else if(run == 56641){
        double E_scattered = 5.71392 - uncorrected_beam_energy;
        double E_gamma_new = 5.71392 - E_scattered*0.997211;
        ret = E_gamma_new;
      }
      else if(run == 56642){
        double E_scattered = 5.71392 - uncorrected_beam_energy;
        double E_gamma_new = 5.71392 - E_scattered*0.997074;
        ret = E_gamma_new;
      }
      else if(run == 56643){
        double E_scattered = 5.71431 - uncorrected_beam_energy;
        double E_gamma_new = 5.71431 - E_scattered*0.997104;
        ret = E_gamma_new;
      }
      else if(run == 56644){
        double E_scattered = 5.71036 - uncorrected_beam_energy;
        double E_gamma_new = 5.71036 - E_scattered*0.99804;
        ret = E_gamma_new;
      }
      else if(run == 56646){
        double E_scattered = 5.71241 - uncorrected_beam_energy;
        double E_gamma_new = 5.71241 - E_scattered*0.997715;
        ret = E_gamma_new;
      }
      else if(run == 56653){
        double E_scattered = 5.71273 - uncorrected_beam_energy;
        double E_gamma_new = 5.71273 - E_scattered*0.997759;
        ret = E_gamma_new;
      }
      else if(run == 56654){
        double E_scattered = 5.71235 - uncorrected_beam_energy;
        double E_gamma_new = 5.71235 - E_scattered*0.997982;
        ret = E_gamma_new;
      }
      else if(run == 56655){
        double E_scattered = 5.71244 - uncorrected_beam_energy;
        double E_gamma_new = 5.71244 - E_scattered*0.997797;
        ret = E_gamma_new;
      }
      else if(run == 56656){
        double E_scattered = 5.71219 - uncorrected_beam_energy;
        double E_gamma_new = 5.71219 - E_scattered*0.997765;
        ret = E_gamma_new;
      }
      else if(run == 56660){
        double E_scattered = 5.7132 - uncorrected_beam_energy;
        double E_gamma_new = 5.7132 - E_scattered*0.997662;
        ret = E_gamma_new;
      }
      else if(run == 56661){
        double E_scattered = 5.71293 - uncorrected_beam_energy;
        double E_gamma_new = 5.71293 - E_scattered*0.997637;
        ret = E_gamma_new;
      }
      else if(run == 56663){
        double E_scattered = 5.71313 - uncorrected_beam_energy;
        double E_gamma_new = 5.71313 - E_scattered*0.997514;
        ret = E_gamma_new;
      }
      else if(run == 56664){
        double E_scattered = 5.71317 - uncorrected_beam_energy;
        double E_gamma_new = 5.71317 - E_scattered*0.997525;
        ret = E_gamma_new;
      }
      else if(run == 56665){
        double E_scattered = 5.7138 - uncorrected_beam_energy;
        double E_gamma_new = 5.7138 - E_scattered*0.997574;
        ret = E_gamma_new;
      }
      else if(run == 56666){
        double E_scattered = 5.7134 - uncorrected_beam_energy;
        double E_gamma_new = 5.7134 - E_scattered*0.997686;
        ret = E_gamma_new;
      }
      else if(run == 56667){
        double E_scattered = 5.71317 - uncorrected_beam_energy;
        double E_gamma_new = 5.71317 - E_scattered*0.997717;
        ret = E_gamma_new;
      }
      else if(run == 56668){
        double E_scattered = 5.71211 - uncorrected_beam_energy;
        double E_gamma_new = 5.71211 - E_scattered*0.997563;
        ret = E_gamma_new;
      }
      else if(run == 56669){
        double E_scattered = 5.71282 - uncorrected_beam_energy;
        double E_gamma_new = 5.71282 - E_scattered*0.997323;
        ret = E_gamma_new;
      }
      else if(run == 56670){
        double E_scattered = 5.71276 - uncorrected_beam_energy;
        double E_gamma_new = 5.71276 - E_scattered*0.99773;
        ret = E_gamma_new;
      }
      else if(run == 56673){
        double E_scattered = 5.71268 - uncorrected_beam_energy;
        double E_gamma_new = 5.71268 - E_scattered*0.997682;
        ret = E_gamma_new;
      }
      else if(run == 56674){
        double E_scattered = 5.71262 - uncorrected_beam_energy;
        double E_gamma_new = 5.71262 - E_scattered*0.997702;
        ret = E_gamma_new;
      }
      else if(run == 56675){
        double E_scattered = 5.7126 - uncorrected_beam_energy;
        double E_gamma_new = 5.7126 - E_scattered*0.997773;
        ret = E_gamma_new;
      }
      else if(run == 56679){
        double E_scattered = 5.71272 - uncorrected_beam_energy;
        double E_gamma_new = 5.71272 - E_scattered*0.997965;
        ret = E_gamma_new;
      }
      else if(run == 56680){
        double E_scattered = 5.71341 - uncorrected_beam_energy;
        double E_gamma_new = 5.71341 - E_scattered*0.997688;
        ret = E_gamma_new;
      }
      else if(run == 56681){
        double E_scattered = 5.71283 - uncorrected_beam_energy;
        double E_gamma_new = 5.71283 - E_scattered*0.997597;
        ret = E_gamma_new;
      }
      else if(run == 56683){
        double E_scattered = 5.71248 - uncorrected_beam_energy;
        double E_gamma_new = 5.71248 - E_scattered*0.997575;
        ret = E_gamma_new;
      }
      else if(run == 56685){
        double E_scattered = 5.7124 - uncorrected_beam_energy;
        double E_gamma_new = 5.7124 - E_scattered*0.997317;
        ret = E_gamma_new;
      }
      else if(run == 56686){
        double E_scattered = 5.71355 - uncorrected_beam_energy;
        double E_gamma_new = 5.71355 - E_scattered*0.997274;
        ret = E_gamma_new;
      }
      else if(run == 56687){
        double E_scattered = 5.71395 - uncorrected_beam_energy;
        double E_gamma_new = 5.71395 - E_scattered*0.997319;
        ret = E_gamma_new;
      }
      else if(run == 56688){
        double E_scattered = 5.71392 - uncorrected_beam_energy;
        double E_gamma_new = 5.71392 - E_scattered*0.99726;
        ret = E_gamma_new;
      }
      else if(run == 56689){
        double E_scattered = 5.71391 - uncorrected_beam_energy;
        double E_gamma_new = 5.71391 - E_scattered*0.997332;
        ret = E_gamma_new;
      }
      else if(run == 56690){
        double E_scattered = 5.71367 - uncorrected_beam_energy;
        double E_gamma_new = 5.71367 - E_scattered*0.997223;
        ret = E_gamma_new;
      }
      else if(run == 56691){
        double E_scattered = 5.71313 - uncorrected_beam_energy;
        double E_gamma_new = 5.71313 - E_scattered*0.997265;
        ret = E_gamma_new;
      }
      else if(run == 56692){
        double E_scattered = 5.71362 - uncorrected_beam_energy;
        double E_gamma_new = 5.71362 - E_scattered*0.997414;
        ret = E_gamma_new;
      }
      else if(run == 56693){
        double E_scattered = 5.7138 - uncorrected_beam_energy;
        double E_gamma_new = 5.7138 - E_scattered*0.997211;
        ret = E_gamma_new;
      }
      else if(run == 56694){
        double E_scattered = 5.71332 - uncorrected_beam_energy;
        double E_gamma_new = 5.71332 - E_scattered*0.997395;
        ret = E_gamma_new;
      }
      else if(run == 56695){
        double E_scattered = 5.71377 - uncorrected_beam_energy;
        double E_gamma_new = 5.71377 - E_scattered*0.997391;
        ret = E_gamma_new;
      }
      else if(run == 56696){
        double E_scattered = 5.71368 - uncorrected_beam_energy;
        double E_gamma_new = 5.71368 - E_scattered*0.997241;
        ret = E_gamma_new;
      }
      else if(run == 56697){
        double E_scattered = 5.7137 - uncorrected_beam_energy;
        double E_gamma_new = 5.7137 - E_scattered*0.997275;
        ret = E_gamma_new;
      }
      else if(run == 56700){
        double E_scattered = 5.71371 - uncorrected_beam_energy;
        double E_gamma_new = 5.71371 - E_scattered*0.99723;
        ret = E_gamma_new;
      }
      else if(run == 56701){
        double E_scattered = 5.71383 - uncorrected_beam_energy;
        double E_gamma_new = 5.71383 - E_scattered*0.997336;
        ret = E_gamma_new;
      }
      else if(run == 56702){
        double E_scattered = 5.71379 - uncorrected_beam_energy;
        double E_gamma_new = 5.71379 - E_scattered*0.997426;
        ret = E_gamma_new;
      }
      else if(run == 56703){
        double E_scattered = 5.71374 - uncorrected_beam_energy;
        double E_gamma_new = 5.71374 - E_scattered*0.99738;
        ret = E_gamma_new;
      }
      else if(run == 56704){
        double E_scattered = 5.71384 - uncorrected_beam_energy;
        double E_gamma_new = 5.71384 - E_scattered*0.997152;
        ret = E_gamma_new;
      }
      else if(run == 56705){
        double E_scattered = 5.71388 - uncorrected_beam_energy;
        double E_gamma_new = 5.71388 - E_scattered*0.997201;
        ret = E_gamma_new;
      }
      else if(run == 56706){
        double E_scattered = 5.71385 - uncorrected_beam_energy;
        double E_gamma_new = 5.71385 - E_scattered*0.997148;
        ret = E_gamma_new;
      }
      else if(run == 56707){
        double E_scattered = 5.7138 - uncorrected_beam_energy;
        double E_gamma_new = 5.7138 - E_scattered*0.997391;
        ret = E_gamma_new;
      }
      else if(run == 56708){
        double E_scattered = 5.71378 - uncorrected_beam_energy;
        double E_gamma_new = 5.71378 - E_scattered*0.997093;
        ret = E_gamma_new;
      }
      else if(run == 56710){
        double E_scattered = 5.71378 - uncorrected_beam_energy;
        double E_gamma_new = 5.71378 - E_scattered*0.997281;
        ret = E_gamma_new;
      }
      else if(run == 56711){
        double E_scattered = 5.7138 - uncorrected_beam_energy;
        double E_gamma_new = 5.7138 - E_scattered*0.997427;
        ret = E_gamma_new;
      }
      else if(run == 56712){
        double E_scattered = 5.71369 - uncorrected_beam_energy;
        double E_gamma_new = 5.71369 - E_scattered*0.997253;
        ret = E_gamma_new;
      }
      else if(run == 56713){
        double E_scattered = 5.71383 - uncorrected_beam_energy;
        double E_gamma_new = 5.71383 - E_scattered*0.997404;
        ret = E_gamma_new;
      }
      else if(run == 56714){
        double E_scattered = 5.7138 - uncorrected_beam_energy;
        double E_gamma_new = 5.7138 - E_scattered*0.997487;
        ret = E_gamma_new;
      }
      else if(run == 56715){
        double E_scattered = 5.71383 - uncorrected_beam_energy;
        double E_gamma_new = 5.71383 - E_scattered*0.997171;
        ret = E_gamma_new;
      }
      else if(run == 56716){
        double E_scattered = 5.71382 - uncorrected_beam_energy;
        double E_gamma_new = 5.71382 - E_scattered*0.997283;
        ret = E_gamma_new;
      }
      else if(run == 56717){
        double E_scattered = 5.71378 - uncorrected_beam_energy;
        double E_gamma_new = 5.71378 - E_scattered*0.997246;
        ret = E_gamma_new;
      }
      else if(run == 56718){
        double E_scattered = 5.71363 - uncorrected_beam_energy;
        double E_gamma_new = 5.71363 - E_scattered*0.997231;
        ret = E_gamma_new;
      }
      else if(run == 56719){
        double E_scattered = 5.71379 - uncorrected_beam_energy;
        double E_gamma_new = 5.71379 - E_scattered*0.997231;
        ret = E_gamma_new;
      }
      else if(run == 56720){
        double E_scattered = 5.7138 - uncorrected_beam_energy;
        double E_gamma_new = 5.7138 - E_scattered*0.997442;
        ret = E_gamma_new;
      }
      else if(run == 56721){
        double E_scattered = 5.71363 - uncorrected_beam_energy;
        double E_gamma_new = 5.71363 - E_scattered*0.997509;
        ret = E_gamma_new;
      }
      else if(run == 56722){
        double E_scattered = 5.7134 - uncorrected_beam_energy;
        double E_gamma_new = 5.7134 - E_scattered*0.997441;
        ret = E_gamma_new;
      }
      else if(run == 56723){
        double E_scattered = 5.71333 - uncorrected_beam_energy;
        double E_gamma_new = 5.71333 - E_scattered*0.997347;
        ret = E_gamma_new;
      }
      else if(run == 56724){
        double E_scattered = 5.71314 - uncorrected_beam_energy;
        double E_gamma_new = 5.71314 - E_scattered*0.997091;
        ret = E_gamma_new;
      }
      else if(run == 56725){
        double E_scattered = 5.7134 - uncorrected_beam_energy;
        double E_gamma_new = 5.7134 - E_scattered*0.997093;
        ret = E_gamma_new;
      }
      else if(run == 56726){
        double E_scattered = 5.71333 - uncorrected_beam_energy;
        double E_gamma_new = 5.71333 - E_scattered*0.997498;
        ret = E_gamma_new;
      }
      else if(run == 56727){
        double E_scattered = 5.71331 - uncorrected_beam_energy;
        double E_gamma_new = 5.71331 - E_scattered*0.9975;
        ret = E_gamma_new;
      }
      else if(run == 56728){
        double E_scattered = 5.71348 - uncorrected_beam_energy;
        double E_gamma_new = 5.71348 - E_scattered*0.997569;
        ret = E_gamma_new;
      }
      else if(run == 56729){
        double E_scattered = 5.71358 - uncorrected_beam_energy;
        double E_gamma_new = 5.71358 - E_scattered*0.997306;
        ret = E_gamma_new;
      }
      else if(run == 56730){
        double E_scattered = 5.7136 - uncorrected_beam_energy;
        double E_gamma_new = 5.7136 - E_scattered*0.997375;
        ret = E_gamma_new;
      }
      else if(run == 56731){
        double E_scattered = 5.7136 - uncorrected_beam_energy;
        double E_gamma_new = 5.7136 - E_scattered*0.997409;
        ret = E_gamma_new;
      }
      else if(run == 56732){
        double E_scattered = 5.7136 - uncorrected_beam_energy;
        double E_gamma_new = 5.7136 - E_scattered*0.997392;
        ret = E_gamma_new;
      }
      else if(run == 56733){
        double E_scattered = 5.71373 - uncorrected_beam_energy;
        double E_gamma_new = 5.71373 - E_scattered*0.997397;
        ret = E_gamma_new;
      }
      else if(run == 56734){
        double E_scattered = 5.71322 - uncorrected_beam_energy;
        double E_gamma_new = 5.71322 - E_scattered*0.997451;
        ret = E_gamma_new;
      }
      else if(run == 56735){
        double E_scattered = 5.71339 - uncorrected_beam_energy;
        double E_gamma_new = 5.71339 - E_scattered*0.997329;
        ret = E_gamma_new;
      }
      else if(run == 56736){
        double E_scattered = 5.71339 - uncorrected_beam_energy;
        double E_gamma_new = 5.71339 - E_scattered*0.997029;
        ret = E_gamma_new;
      }
      else if(run == 56737){
        double E_scattered = 5.71339 - uncorrected_beam_energy;
        double E_gamma_new = 5.71339 - E_scattered*0.99734;
        ret = E_gamma_new;
      }
      else if(run == 56738){
        double E_scattered = 5.71337 - uncorrected_beam_energy;
        double E_gamma_new = 5.71337 - E_scattered*0.997559;
        ret = E_gamma_new;
      }
      else if(run == 56739){
        double E_scattered = 5.71338 - uncorrected_beam_energy;
        double E_gamma_new = 5.71338 - E_scattered*0.996985;
        ret = E_gamma_new;
      }
      else if(run == 56740){
        double E_scattered = 5.71339 - uncorrected_beam_energy;
        double E_gamma_new = 5.71339 - E_scattered*0.997211;
        ret = E_gamma_new;
      }
      else if(run == 56741){
        double E_scattered = 5.71339 - uncorrected_beam_energy;
        double E_gamma_new = 5.71339 - E_scattered*0.997503;
        ret = E_gamma_new;
      }
      else if(run == 56742){
        double E_scattered = 5.71338 - uncorrected_beam_energy;
        double E_gamma_new = 5.71338 - E_scattered*0.996727;
        ret = E_gamma_new;
      }
      else if(run == 56743){
        double E_scattered = 5.71338 - uncorrected_beam_energy;
        double E_gamma_new = 5.71338 - E_scattered*0.997202;
        ret = E_gamma_new;
      }
      else if(run == 56744){
        double E_scattered = 5.71337 - uncorrected_beam_energy;
        double E_gamma_new = 5.71337 - E_scattered*0.997326;
        ret = E_gamma_new;
      }
      else if(run == 56747){
        double E_scattered = 5.71155 - uncorrected_beam_energy;
        double E_gamma_new = 5.71155 - E_scattered*0.996944;
        ret = E_gamma_new;
      }
      else if(run == 56748){
        double E_scattered = 5.71167 - uncorrected_beam_energy;
        double E_gamma_new = 5.71167 - E_scattered*0.997454;
        ret = E_gamma_new;
      }
      else if(run == 56749){
        double E_scattered = 5.71167 - uncorrected_beam_energy;
        double E_gamma_new = 5.71167 - E_scattered*0.997072;
        ret = E_gamma_new;
      }
      else if(run == 56750){
        double E_scattered = 5.71167 - uncorrected_beam_energy;
        double E_gamma_new = 5.71167 - E_scattered*0.997251;
        ret = E_gamma_new;
      }
      else if(run == 56751){
        double E_scattered = 5.71158 - uncorrected_beam_energy;
        double E_gamma_new = 5.71158 - E_scattered*0.997279;
        ret = E_gamma_new;
      }
      else if(run == 56752){
        double E_scattered = 5.71158 - uncorrected_beam_energy;
        double E_gamma_new = 5.71158 - E_scattered*0.997534;
        ret = E_gamma_new;
      }
      else if(run == 56753){
        double E_scattered = 5.71185 - uncorrected_beam_energy;
        double E_gamma_new = 5.71185 - E_scattered*0.997036;
        ret = E_gamma_new;
      }
      else if(run == 56754){
        double E_scattered = 5.71094 - uncorrected_beam_energy;
        double E_gamma_new = 5.71094 - E_scattered*0.996978;
        ret = E_gamma_new;
      }
      else if(run == 56755){
        double E_scattered = 5.71087 - uncorrected_beam_energy;
        double E_gamma_new = 5.71087 - E_scattered*0.997694;
        ret = E_gamma_new;
      }
      else if(run == 56756){
        double E_scattered = 5.71218 - uncorrected_beam_energy;
        double E_gamma_new = 5.71218 - E_scattered*0.997203;
        ret = E_gamma_new;
      }
      else if(run == 56757){
        double E_scattered = 5.71214 - uncorrected_beam_energy;
        double E_gamma_new = 5.71214 - E_scattered*0.997374;
        ret = E_gamma_new;
      }
      else if(run == 56758){
        double E_scattered = 5.71209 - uncorrected_beam_energy;
        double E_gamma_new = 5.71209 - E_scattered*0.997065;
        ret = E_gamma_new;
      }
      else if(run == 56759){
        double E_scattered = 5.71198 - uncorrected_beam_energy;
        double E_gamma_new = 5.71198 - E_scattered*0.996821;
        ret = E_gamma_new;
      }
      else if(run == 56760){
        double E_scattered = 5.7121 - uncorrected_beam_energy;
        double E_gamma_new = 5.7121 - E_scattered*0.997315;
        ret = E_gamma_new;
      }
      else if(run == 56761){
        double E_scattered = 5.71204 - uncorrected_beam_energy;
        double E_gamma_new = 5.71204 - E_scattered*0.996864;
        ret = E_gamma_new;
      }
      else if(run == 56762){
        double E_scattered = 5.7121 - uncorrected_beam_energy;
        double E_gamma_new = 5.7121 - E_scattered*0.997421;
        ret = E_gamma_new;
      }
      else if(run == 56763){
        double E_scattered = 5.7121 - uncorrected_beam_energy;
        double E_gamma_new = 5.7121 - E_scattered*0.996934;
        ret = E_gamma_new;
      }
      else if(run == 56764){
        double E_scattered = 5.71211 - uncorrected_beam_energy;
        double E_gamma_new = 5.71211 - E_scattered*0.997051;
        ret = E_gamma_new;
      }
      else if(run == 56765){
        double E_scattered = 5.71117 - uncorrected_beam_energy;
        double E_gamma_new = 5.71117 - E_scattered*0.996819;
        ret = E_gamma_new;
      }
      else if(run == 56766){
        double E_scattered = 5.71157 - uncorrected_beam_energy;
        double E_gamma_new = 5.71157 - E_scattered*0.99716;
        ret = E_gamma_new;
      }
      else if(run == 56767){
        double E_scattered = 5.71176 - uncorrected_beam_energy;
        double E_gamma_new = 5.71176 - E_scattered*0.996813;
        ret = E_gamma_new;
      }
      else if(run == 56768){
        double E_scattered = 5.71126 - uncorrected_beam_energy;
        double E_gamma_new = 5.71126 - E_scattered*0.997314;
        ret = E_gamma_new;
      }
      else if(run == 56769){
        double E_scattered = 5.7112 - uncorrected_beam_energy;
        double E_gamma_new = 5.7112 - E_scattered*0.997391;
        ret = E_gamma_new;
      }
      else if(run == 56770){
        double E_scattered = 5.71117 - uncorrected_beam_energy;
        double E_gamma_new = 5.71117 - E_scattered*0.997525;
        ret = E_gamma_new;
      }
      else if(run == 56771){
        double E_scattered = 5.71119 - uncorrected_beam_energy;
        double E_gamma_new = 5.71119 - E_scattered*0.99726;
        ret = E_gamma_new;
      }
      else if(run == 56772){
        double E_scattered = 5.71121 - uncorrected_beam_energy;
        double E_gamma_new = 5.71121 - E_scattered*0.997177;
        ret = E_gamma_new;
      }
      else if(run == 56774){
        double E_scattered = 5.71119 - uncorrected_beam_energy;
        double E_gamma_new = 5.71119 - E_scattered*0.997396;
        ret = E_gamma_new;
      }
      else if(run == 56775){
        double E_scattered = 5.71115 - uncorrected_beam_energy;
        double E_gamma_new = 5.71115 - E_scattered*0.997286;
        ret = E_gamma_new;
      }
      else if(run == 56776){
        double E_scattered = 5.71113 - uncorrected_beam_energy;
        double E_gamma_new = 5.71113 - E_scattered*0.997384;
        ret = E_gamma_new;
      }
      else if(run == 56777){
        double E_scattered = 5.7112 - uncorrected_beam_energy;
        double E_gamma_new = 5.7112 - E_scattered*0.997512;
        ret = E_gamma_new;
      }
      else if(run == 56778){
        double E_scattered = 5.7112 - uncorrected_beam_energy;
        double E_gamma_new = 5.7112 - E_scattered*0.997291;
        ret = E_gamma_new;
      }
      else if(run == 56780){
        double E_scattered = 5.7112 - uncorrected_beam_energy;
        double E_gamma_new = 5.7112 - E_scattered*0.997004;
        ret = E_gamma_new;
      }
      else if(run == 56781){
        double E_scattered = 5.7112 - uncorrected_beam_energy;
        double E_gamma_new = 5.7112 - E_scattered*0.997245;
        ret = E_gamma_new;
      }
      else if(run == 56782){
        double E_scattered = 5.71127 - uncorrected_beam_energy;
        double E_gamma_new = 5.71127 - E_scattered*0.997391;
        ret = E_gamma_new;
      }
      else if(run == 56783){
        double E_scattered = 5.71136 - uncorrected_beam_energy;
        double E_gamma_new = 5.71136 - E_scattered*0.997273;
        ret = E_gamma_new;
      }
      else if(run == 56784){
        double E_scattered = 5.7112 - uncorrected_beam_energy;
        double E_gamma_new = 5.7112 - E_scattered*0.99711;
        ret = E_gamma_new;
      }
      else if(run == 56787){
        double E_scattered = 5.71105 - uncorrected_beam_energy;
        double E_gamma_new = 5.71105 - E_scattered*0.99733;
        ret = E_gamma_new;
      }
      else if(run == 56788){
        double E_scattered = 5.71394 - uncorrected_beam_energy;
        double E_gamma_new = 5.71394 - E_scattered*0.997314;
        ret = E_gamma_new;
      }
      else if(run == 56791){
        double E_scattered = 5.71126 - uncorrected_beam_energy;
        double E_gamma_new = 5.71126 - E_scattered*0.996957;
        ret = E_gamma_new;
      }
      else if(run == 56792){
        double E_scattered = 5.71137 - uncorrected_beam_energy;
        double E_gamma_new = 5.71137 - E_scattered*0.997174;
        ret = E_gamma_new;
      }
      else if(run == 56793){
        double E_scattered = 5.71168 - uncorrected_beam_energy;
        double E_gamma_new = 5.71168 - E_scattered*0.997253;
        ret = E_gamma_new;
      }
      else if(run == 56794){
        double E_scattered = 5.7117 - uncorrected_beam_energy;
        double E_gamma_new = 5.7117 - E_scattered*0.997274;
        ret = E_gamma_new;
      }
      else if(run == 56798){
        double E_scattered = 5.71162 - uncorrected_beam_energy;
        double E_gamma_new = 5.71162 - E_scattered*0.99741;
        ret = E_gamma_new;
      }
      else if(run == 56799){
        double E_scattered = 5.71167 - uncorrected_beam_energy;
        double E_gamma_new = 5.71167 - E_scattered*0.99736;
        ret = E_gamma_new;
      }
      else if(run == 56800){
        double E_scattered = 5.7117 - uncorrected_beam_energy;
        double E_gamma_new = 5.7117 - E_scattered*0.997494;
        ret = E_gamma_new;
      }
      else if(run == 56801){
        double E_scattered = 5.71168 - uncorrected_beam_energy;
        double E_gamma_new = 5.71168 - E_scattered*0.997358;
        ret = E_gamma_new;
      }
      else if(run == 56802){
        double E_scattered = 5.71117 - uncorrected_beam_energy;
        double E_gamma_new = 5.71117 - E_scattered*0.997379;
        ret = E_gamma_new;
      }
      else if(run == 56804){
        double E_scattered = 5.71135 - uncorrected_beam_energy;
        double E_gamma_new = 5.71135 - E_scattered*0.997579;
        ret = E_gamma_new;
      }
      else if(run == 56805){
        double E_scattered = 5.71105 - uncorrected_beam_energy;
        double E_gamma_new = 5.71105 - E_scattered*0.996911;
        ret = E_gamma_new;
      }
      else if(run == 56806){
        double E_scattered = 5.71215 - uncorrected_beam_energy;
        double E_gamma_new = 5.71215 - E_scattered*0.997212;
        ret = E_gamma_new;
      }
      else if(run == 56807){
        double E_scattered = 5.71236 - uncorrected_beam_energy;
        double E_gamma_new = 5.71236 - E_scattered*0.997428;
        ret = E_gamma_new;
      }
      else if(run == 56808){
        double E_scattered = 5.7121 - uncorrected_beam_energy;
        double E_gamma_new = 5.7121 - E_scattered*0.997037;
        ret = E_gamma_new;
      }
      else if(run == 56809){
        double E_scattered = 5.71089 - uncorrected_beam_energy;
        double E_gamma_new = 5.71089 - E_scattered*0.99706;
        ret = E_gamma_new;
      }
      else if(run == 56810){
        double E_scattered = 5.71348 - uncorrected_beam_energy;
        double E_gamma_new = 5.71348 - E_scattered*0.997406;
        ret = E_gamma_new;
      }
      else if(run == 56811){
        double E_scattered = 5.7123 - uncorrected_beam_energy;
        double E_gamma_new = 5.7123 - E_scattered*0.997219;
        ret = E_gamma_new;
      }
      else if(run == 56812){
        double E_scattered = 5.71238 - uncorrected_beam_energy;
        double E_gamma_new = 5.71238 - E_scattered*0.997251;
        ret = E_gamma_new;
      }
      else if(run == 56813){
        double E_scattered = 5.71309 - uncorrected_beam_energy;
        double E_gamma_new = 5.71309 - E_scattered*0.997349;
        ret = E_gamma_new;
      }
      else if(run == 56814){
        double E_scattered = 5.71106 - uncorrected_beam_energy;
        double E_gamma_new = 5.71106 - E_scattered*0.99716;
        ret = E_gamma_new;
      }
      else if(run == 56815){
        double E_scattered = 5.7121 - uncorrected_beam_energy;
        double E_gamma_new = 5.7121 - E_scattered*0.997285;
        ret = E_gamma_new;
      }
      else if(run == 56821){
        double E_scattered = 5.71303 - uncorrected_beam_energy;
        double E_gamma_new = 5.71303 - E_scattered*0.997308;
        ret = E_gamma_new;
      }
      else if(run == 56822){
        double E_scattered = 5.7122 - uncorrected_beam_energy;
        double E_gamma_new = 5.7122 - E_scattered*0.997261;
        ret = E_gamma_new;
      }
      else if(run == 56823){
        double E_scattered = 5.71233 - uncorrected_beam_energy;
        double E_gamma_new = 5.71233 - E_scattered*0.996962;
        ret = E_gamma_new;
      }
      else if(run == 56824){
        double E_scattered = 5.7123 - uncorrected_beam_energy;
        double E_gamma_new = 5.7123 - E_scattered*0.996903;
        ret = E_gamma_new;
      }
      else if(run == 56825){
        double E_scattered = 5.71485 - uncorrected_beam_energy;
        double E_gamma_new = 5.71485 - E_scattered*0.997423;
        ret = E_gamma_new;
      }
      else if(run == 56826){
        double E_scattered = 5.7123 - uncorrected_beam_energy;
        double E_gamma_new = 5.7123 - E_scattered*0.997408;
        ret = E_gamma_new;
      }
      else if(run == 56827){
        double E_scattered = 5.71266 - uncorrected_beam_energy;
        double E_gamma_new = 5.71266 - E_scattered*0.997362;
        ret = E_gamma_new;
      }
      else if(run == 56831){
        double E_scattered = 5.7123 - uncorrected_beam_energy;
        double E_gamma_new = 5.7123 - E_scattered*0.997156;
        ret = E_gamma_new;
      }
      else if(run == 56832){
        double E_scattered = 5.71214 - uncorrected_beam_energy;
        double E_gamma_new = 5.71214 - E_scattered*0.997151;
        ret = E_gamma_new;
      }
      else if(run == 56833){
        double E_scattered = 5.71273 - uncorrected_beam_energy;
        double E_gamma_new = 5.71273 - E_scattered*0.99726;
        ret = E_gamma_new;
      }
      else if(run == 56834){
        double E_scattered = 5.71641 - uncorrected_beam_energy;
        double E_gamma_new = 5.71641 - E_scattered*0.997972;
        ret = E_gamma_new;
      }
      else if(run == 56835){
        double E_scattered = 5.71305 - uncorrected_beam_energy;
        double E_gamma_new = 5.71305 - E_scattered*0.997113;
        ret = E_gamma_new;
      }
      else if(run == 56838){
        double E_scattered = 5.71179 - uncorrected_beam_energy;
        double E_gamma_new = 5.71179 - E_scattered*0.997502;
        ret = E_gamma_new;
      }
      else if(run == 56839){
        double E_scattered = 5.71199 - uncorrected_beam_energy;
        double E_gamma_new = 5.71199 - E_scattered*0.997145;
        ret = E_gamma_new;
      }
      else if(run == 56841){
        double E_scattered = 5.7118 - uncorrected_beam_energy;
        double E_gamma_new = 5.7118 - E_scattered*0.997289;
        ret = E_gamma_new;
      }
      else if(run == 56842){
        double E_scattered = 5.71175 - uncorrected_beam_energy;
        double E_gamma_new = 5.71175 - E_scattered*0.997542;
        ret = E_gamma_new;
      }
      else if(run == 56843){
        double E_scattered = 5.71172 - uncorrected_beam_energy;
        double E_gamma_new = 5.71172 - E_scattered*0.996853;
        ret = E_gamma_new;
      }
      else if(run == 56844){
        double E_scattered = 5.71731 - uncorrected_beam_energy;
        double E_gamma_new = 5.71731 - E_scattered*0.99767;
        ret = E_gamma_new;
      }
      else if(run == 56845){
        double E_scattered = 5.71168 - uncorrected_beam_energy;
        double E_gamma_new = 5.71168 - E_scattered*0.99715;
        ret = E_gamma_new;
      }
      else if(run == 56849){
        double E_scattered = 5.71139 - uncorrected_beam_energy;
        double E_gamma_new = 5.71139 - E_scattered*0.997221;
        ret = E_gamma_new;
      }
      else if(run == 56853){
        double E_scattered = 5.71251 - uncorrected_beam_energy;
        double E_gamma_new = 5.71251 - E_scattered*0.99686;
        ret = E_gamma_new;
      }
      else if(run == 56854){
        double E_scattered = 5.71278 - uncorrected_beam_energy;
        double E_gamma_new = 5.71278 - E_scattered*0.997171;
        ret = E_gamma_new;
      }
      else if(run == 56855){
        double E_scattered = 5.71194 - uncorrected_beam_energy;
        double E_gamma_new = 5.71194 - E_scattered*0.997058;
        ret = E_gamma_new;
      }
      else if(run == 56856){
        double E_scattered = 5.71281 - uncorrected_beam_energy;
        double E_gamma_new = 5.71281 - E_scattered*0.997134;
        ret = E_gamma_new;
      }
      else if(run == 56857){
        double E_scattered = 5.71202 - uncorrected_beam_energy;
        double E_gamma_new = 5.71202 - E_scattered*0.996693;
        ret = E_gamma_new;
      }
      else if(run == 56858){
        double E_scattered = 5.71206 - uncorrected_beam_energy;
        double E_gamma_new = 5.71206 - E_scattered*0.997064;
        ret = E_gamma_new;
      }
      else if(run == 56859){
        double E_scattered = 5.7121 - uncorrected_beam_energy;
        double E_gamma_new = 5.7121 - E_scattered*0.997071;
        ret = E_gamma_new;
      }
      else if(run == 56860){
        double E_scattered = 5.71183 - uncorrected_beam_energy;
        double E_gamma_new = 5.71183 - E_scattered*0.996815;
        ret = E_gamma_new;
      }
      else if(run == 56861){
        double E_scattered = 5.71116 - uncorrected_beam_energy;
        double E_gamma_new = 5.71116 - E_scattered*0.997198;
        ret = E_gamma_new;
      }
      else if(run == 56862){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.997174;
        ret = E_gamma_new;
      }
      else if(run == 56864){
        double E_scattered = 5.71083 - uncorrected_beam_energy;
        double E_gamma_new = 5.71083 - E_scattered*0.997437;
        ret = E_gamma_new;
      }
      else if(run == 56865){
        double E_scattered = 5.71025 - uncorrected_beam_energy;
        double E_gamma_new = 5.71025 - E_scattered*0.99712;
        ret = E_gamma_new;
      }
      else if(run == 56866){
        double E_scattered = 5.71063 - uncorrected_beam_energy;
        double E_gamma_new = 5.71063 - E_scattered*0.997294;
        ret = E_gamma_new;
      }
      else if(run == 56869){
        double E_scattered = 5.71063 - uncorrected_beam_energy;
        double E_gamma_new = 5.71063 - E_scattered*0.99745;
        ret = E_gamma_new;
      }
      else if(run == 56870){
        double E_scattered = 5.71063 - uncorrected_beam_energy;
        double E_gamma_new = 5.71063 - E_scattered*0.997278;
        ret = E_gamma_new;
      }
      else if(run == 56874){
        double E_scattered = 5.71063 - uncorrected_beam_energy;
        double E_gamma_new = 5.71063 - E_scattered*0.997061;
        ret = E_gamma_new;
      }
      else if(run == 56875){
        double E_scattered = 5.71063 - uncorrected_beam_energy;
        double E_gamma_new = 5.71063 - E_scattered*0.997491;
        ret = E_gamma_new;
      }
      else if(run == 56877){
        double E_scattered = 5.71065 - uncorrected_beam_energy;
        double E_gamma_new = 5.71065 - E_scattered*0.997502;
        ret = E_gamma_new;
      }
      else if(run == 56879){
        double E_scattered = 5.71063 - uncorrected_beam_energy;
        double E_gamma_new = 5.71063 - E_scattered*0.997488;
        ret = E_gamma_new;
      }
      else if(run == 56897){
        double E_scattered = 5.71133 - uncorrected_beam_energy;
        double E_gamma_new = 5.71133 - E_scattered*0.997979;
        ret = E_gamma_new;
      }
      else if(run == 56898){
        double E_scattered = 5.7113 - uncorrected_beam_energy;
        double E_gamma_new = 5.7113 - E_scattered*0.997759;
        ret = E_gamma_new;
      }
      else if(run == 56899){
        double E_scattered = 5.71425 - uncorrected_beam_energy;
        double E_gamma_new = 5.71425 - E_scattered*0.997855;
        ret = E_gamma_new;
      }
      else if(run == 56900){
        double E_scattered = 5.7147 - uncorrected_beam_energy;
        double E_gamma_new = 5.7147 - E_scattered*0.998091;
        ret = E_gamma_new;
      }
      else if(run == 56901){
        double E_scattered = 5.71128 - uncorrected_beam_energy;
        double E_gamma_new = 5.71128 - E_scattered*0.997816;
        ret = E_gamma_new;
      }
      else if(run == 56902){
        double E_scattered = 5.71153 - uncorrected_beam_energy;
        double E_gamma_new = 5.71153 - E_scattered*0.997769;
        ret = E_gamma_new;
      }
      else if(run == 56903){
        double E_scattered = 5.71133 - uncorrected_beam_energy;
        double E_gamma_new = 5.71133 - E_scattered*0.997856;
        ret = E_gamma_new;
      }
      else if(run == 56904){
        double E_scattered = 5.71133 - uncorrected_beam_energy;
        double E_gamma_new = 5.71133 - E_scattered*0.997648;
        ret = E_gamma_new;
      }
      else if(run == 56905){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.99765;
        ret = E_gamma_new;
      }
      else if(run == 56906){
        double E_scattered = 5.71052 - uncorrected_beam_energy;
        double E_gamma_new = 5.71052 - E_scattered*0.997803;
        ret = E_gamma_new;
      }
      else if(run == 56907){
        double E_scattered = 5.70996 - uncorrected_beam_energy;
        double E_gamma_new = 5.70996 - E_scattered*0.998029;
        ret = E_gamma_new;
      }
      else if(run == 56908){
        double E_scattered = 5.71083 - uncorrected_beam_energy;
        double E_gamma_new = 5.71083 - E_scattered*0.998202;
        ret = E_gamma_new;
      }
      else if(run == 56910){
        double E_scattered = 5.71083 - uncorrected_beam_energy;
        double E_gamma_new = 5.71083 - E_scattered*0.997591;
        ret = E_gamma_new;
      }
      else if(run == 56911){
        double E_scattered = 5.71083 - uncorrected_beam_energy;
        double E_gamma_new = 5.71083 - E_scattered*0.997588;
        ret = E_gamma_new;
      }
      else if(run == 56912){
        double E_scattered = 5.71083 - uncorrected_beam_energy;
        double E_gamma_new = 5.71083 - E_scattered*0.998189;
        ret = E_gamma_new;
      }
      else if(run == 56913){
        double E_scattered = 5.7113 - uncorrected_beam_energy;
        double E_gamma_new = 5.7113 - E_scattered*0.998032;
        ret = E_gamma_new;
      }
      else if(run == 56914){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998049;
        ret = E_gamma_new;
      }
      else if(run == 56915){
        double E_scattered = 5.71173 - uncorrected_beam_energy;
        double E_gamma_new = 5.71173 - E_scattered*0.997785;
        ret = E_gamma_new;
      }
      else if(run == 56916){
        double E_scattered = 5.71109 - uncorrected_beam_energy;
        double E_gamma_new = 5.71109 - E_scattered*0.997806;
        ret = E_gamma_new;
      }
      else if(run == 56917){
        double E_scattered = 5.7106 - uncorrected_beam_energy;
        double E_gamma_new = 5.7106 - E_scattered*0.997779;
        ret = E_gamma_new;
      }
      else if(run == 56918){
        double E_scattered = 5.71105 - uncorrected_beam_energy;
        double E_gamma_new = 5.71105 - E_scattered*0.997936;
        ret = E_gamma_new;
      }
      else if(run == 56919){
        double E_scattered = 5.71115 - uncorrected_beam_energy;
        double E_gamma_new = 5.71115 - E_scattered*0.997871;
        ret = E_gamma_new;
      }
      else if(run == 56921){
        double E_scattered = 5.70913 - uncorrected_beam_energy;
        double E_gamma_new = 5.70913 - E_scattered*0.998054;
        ret = E_gamma_new;
      }
      else if(run == 56922){
        double E_scattered = 5.70993 - uncorrected_beam_energy;
        double E_gamma_new = 5.70993 - E_scattered*0.998358;
        ret = E_gamma_new;
      }
      else if(run == 56923){
        double E_scattered = 5.71055 - uncorrected_beam_energy;
        double E_gamma_new = 5.71055 - E_scattered*0.997904;
        ret = E_gamma_new;
      }
      else if(run == 56924){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.997499;
        ret = E_gamma_new;
      }
      else if(run == 56925){
        double E_scattered = 5.71052 - uncorrected_beam_energy;
        double E_gamma_new = 5.71052 - E_scattered*0.997496;
        ret = E_gamma_new;
      }
      else if(run == 56926){
        double E_scattered = 5.71052 - uncorrected_beam_energy;
        double E_gamma_new = 5.71052 - E_scattered*0.99713;
        ret = E_gamma_new;
      }
      else if(run == 56927){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.997257;
        ret = E_gamma_new;
      }
      else if(run == 56928){
        double E_scattered = 5.71055 - uncorrected_beam_energy;
        double E_gamma_new = 5.71055 - E_scattered*0.997384;
        ret = E_gamma_new;
      }
      else if(run == 56929){
        double E_scattered = 5.7106 - uncorrected_beam_energy;
        double E_gamma_new = 5.7106 - E_scattered*0.997318;
        ret = E_gamma_new;
      }
      else if(run == 56930){
        double E_scattered = 5.71054 - uncorrected_beam_energy;
        double E_gamma_new = 5.71054 - E_scattered*0.997361;
        ret = E_gamma_new;
      }
      else if(run == 56932){
        double E_scattered = 5.71067 - uncorrected_beam_energy;
        double E_gamma_new = 5.71067 - E_scattered*1.00114;
        ret = E_gamma_new;
      }
      else if(run == 56933){
        double E_scattered = 5.71057 - uncorrected_beam_energy;
        double E_gamma_new = 5.71057 - E_scattered*0.99838;
        ret = E_gamma_new;
      }
      else if(run == 56934){
        double E_scattered = 5.71055 - uncorrected_beam_energy;
        double E_gamma_new = 5.71055 - E_scattered*0.998314;
        ret = E_gamma_new;
      }
      else if(run == 56935){
        double E_scattered = 5.71195 - uncorrected_beam_energy;
        double E_gamma_new = 5.71195 - E_scattered*0.998502;
        ret = E_gamma_new;
      }
      else if(run == 56936){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.997102;
        ret = E_gamma_new;
      }
      else if(run == 56937){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.998683;
        ret = E_gamma_new;
      }
      else if(run == 56938){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.997271;
        ret = E_gamma_new;
      }
      else if(run == 56939){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.9971;
        ret = E_gamma_new;
      }
      else if(run == 56940){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998248;
        ret = E_gamma_new;
      }
      else if(run == 56948){
        double E_scattered = 5.71093 - uncorrected_beam_energy;
        double E_gamma_new = 5.71093 - E_scattered*0.998451;
        ret = E_gamma_new;
      }
      else if(run == 56949){
        double E_scattered = 5.71054 - uncorrected_beam_energy;
        double E_gamma_new = 5.71054 - E_scattered*0.998197;
        ret = E_gamma_new;
      }
      else if(run == 56950){
        double E_scattered = 5.71059 - uncorrected_beam_energy;
        double E_gamma_new = 5.71059 - E_scattered*0.9984;
        ret = E_gamma_new;
      }
      else if(run == 56951){
        double E_scattered = 5.71057 - uncorrected_beam_energy;
        double E_gamma_new = 5.71057 - E_scattered*0.998242;
        ret = E_gamma_new;
      }
      else if(run == 56952){
        double E_scattered = 5.71062 - uncorrected_beam_energy;
        double E_gamma_new = 5.71062 - E_scattered*0.998333;
        ret = E_gamma_new;
      }
      else if(run == 56953){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998353;
        ret = E_gamma_new;
      }
      else if(run == 56954){
        double E_scattered = 5.71127 - uncorrected_beam_energy;
        double E_gamma_new = 5.71127 - E_scattered*0.998387;
        ret = E_gamma_new;
      }
      else if(run == 56955){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.998427;
        ret = E_gamma_new;
      }
      else if(run == 56956){
        double E_scattered = 5.71054 - uncorrected_beam_energy;
        double E_gamma_new = 5.71054 - E_scattered*0.998327;
        ret = E_gamma_new;
      }
      else if(run == 56958){
        double E_scattered = 5.71028 - uncorrected_beam_energy;
        double E_gamma_new = 5.71028 - E_scattered*0.998552;
        ret = E_gamma_new;
      }
      else if(run == 56960){
        double E_scattered = 5.71052 - uncorrected_beam_energy;
        double E_gamma_new = 5.71052 - E_scattered*0.998301;
        ret = E_gamma_new;
      }
      else if(run == 56961){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998371;
        ret = E_gamma_new;
      }
      else if(run == 56962){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.998303;
        ret = E_gamma_new;
      }
      else if(run == 56963){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998128;
        ret = E_gamma_new;
      }
      else if(run == 56964){
        double E_scattered = 5.71048 - uncorrected_beam_energy;
        double E_gamma_new = 5.71048 - E_scattered*0.998163;
        ret = E_gamma_new;
      }
      else if(run == 56965){
        double E_scattered = 5.712 - uncorrected_beam_energy;
        double E_gamma_new = 5.712 - E_scattered*0.998259;
        ret = E_gamma_new;
      }
      else if(run == 56966){
        double E_scattered = 5.71054 - uncorrected_beam_energy;
        double E_gamma_new = 5.71054 - E_scattered*0.998154;
        ret = E_gamma_new;
      }
      else if(run == 56967){
        double E_scattered = 5.71122 - uncorrected_beam_energy;
        double E_gamma_new = 5.71122 - E_scattered*0.998269;
        ret = E_gamma_new;
      }
      else if(run == 56968){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998219;
        ret = E_gamma_new;
      }
      else if(run == 56969){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998261;
        ret = E_gamma_new;
      }
      else if(run == 56970){
        double E_scattered = 5.71138 - uncorrected_beam_energy;
        double E_gamma_new = 5.71138 - E_scattered*0.998345;
        ret = E_gamma_new;
      }
      else if(run == 56971){
        double E_scattered = 5.7106 - uncorrected_beam_energy;
        double E_gamma_new = 5.7106 - E_scattered*0.99838;
        ret = E_gamma_new;
      }
      else if(run == 56972){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.99836;
        ret = E_gamma_new;
      }
      else if(run == 56973){
        double E_scattered = 5.71065 - uncorrected_beam_energy;
        double E_gamma_new = 5.71065 - E_scattered*0.998189;
        ret = E_gamma_new;
      }
      else if(run == 56974){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998261;
        ret = E_gamma_new;
      }
      else if(run == 56975){
        double E_scattered = 5.71055 - uncorrected_beam_energy;
        double E_gamma_new = 5.71055 - E_scattered*0.998299;
        ret = E_gamma_new;
      }
      else if(run == 56977){
        double E_scattered = 5.71016 - uncorrected_beam_energy;
        double E_gamma_new = 5.71016 - E_scattered*0.998273;
        ret = E_gamma_new;
      }
      else if(run == 56978){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998374;
        ret = E_gamma_new;
      }
      else if(run == 56979){
        double E_scattered = 5.71157 - uncorrected_beam_energy;
        double E_gamma_new = 5.71157 - E_scattered*0.998468;
        ret = E_gamma_new;
      }
      else if(run == 56980){
        double E_scattered = 5.71156 - uncorrected_beam_energy;
        double E_gamma_new = 5.71156 - E_scattered*0.998308;
        ret = E_gamma_new;
      }
      else if(run == 56981){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.99821;
        ret = E_gamma_new;
      }
      else if(run == 56982){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998724;
        ret = E_gamma_new;
      }
      else if(run == 56983){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998164;
        ret = E_gamma_new;
      }
      else if(run == 56985){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998401;
        ret = E_gamma_new;
      }
      else if(run == 56986){
        double E_scattered = 5.71113 - uncorrected_beam_energy;
        double E_gamma_new = 5.71113 - E_scattered*0.998388;
        ret = E_gamma_new;
      }
      else if(run == 56989){
        double E_scattered = 5.71275 - uncorrected_beam_energy;
        double E_gamma_new = 5.71275 - E_scattered*0.998014;
        ret = E_gamma_new;
      }
      else if(run == 56992){
        double E_scattered = 5.71275 - uncorrected_beam_energy;
        double E_gamma_new = 5.71275 - E_scattered*0.998457;
        ret = E_gamma_new;
      }
      else if(run == 56993){
        double E_scattered = 5.71052 - uncorrected_beam_energy;
        double E_gamma_new = 5.71052 - E_scattered*0.998376;
        ret = E_gamma_new;
      }
      else if(run == 56994){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998429;
        ret = E_gamma_new;
      }
      else if(run == 56996){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998266;
        ret = E_gamma_new;
      }
      else if(run == 56997){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998404;
        ret = E_gamma_new;
      }
      else if(run == 56998){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998156;
        ret = E_gamma_new;
      }
      else if(run == 56999){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998263;
        ret = E_gamma_new;
      }
      else if(run == 57000){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998441;
        ret = E_gamma_new;
      }
      else if(run == 57001){
        double E_scattered = 5.71049 - uncorrected_beam_energy;
        double E_gamma_new = 5.71049 - E_scattered*0.998239;
        ret = E_gamma_new;
      }
      else if(run == 57002){
        double E_scattered = 5.71015 - uncorrected_beam_energy;
        double E_gamma_new = 5.71015 - E_scattered*0.99832;
        ret = E_gamma_new;
      }
      else if(run == 57003){
        double E_scattered = 5.7119 - uncorrected_beam_energy;
        double E_gamma_new = 5.7119 - E_scattered*0.998351;
        ret = E_gamma_new;
      }
      else if(run == 57004){
        double E_scattered = 5.71052 - uncorrected_beam_energy;
        double E_gamma_new = 5.71052 - E_scattered*0.998205;
        ret = E_gamma_new;
      }
      else if(run == 57005){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.99815;
        ret = E_gamma_new;
      }
      else if(run == 57006){
        double E_scattered = 5.71056 - uncorrected_beam_energy;
        double E_gamma_new = 5.71056 - E_scattered*0.998185;
        ret = E_gamma_new;
      }
      else if(run == 57008){
        double E_scattered = 5.71054 - uncorrected_beam_energy;
        double E_gamma_new = 5.71054 - E_scattered*0.998201;
        ret = E_gamma_new;
      }
      else if(run == 57009){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.998183;
        ret = E_gamma_new;
      }
      else if(run == 57010){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.998114;
        ret = E_gamma_new;
      }
      else if(run == 57011){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.998149;
        ret = E_gamma_new;
      }
      else if(run == 57012){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.998146;
        ret = E_gamma_new;
      }
      else if(run == 57013){
        double E_scattered = 5.71059 - uncorrected_beam_energy;
        double E_gamma_new = 5.71059 - E_scattered*0.99831;
        ret = E_gamma_new;
      }
      else if(run == 57014){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.998295;
        ret = E_gamma_new;
      }
      else if(run == 57015){
        double E_scattered = 5.71059 - uncorrected_beam_energy;
        double E_gamma_new = 5.71059 - E_scattered*0.99822;
        ret = E_gamma_new;
      }
      else if(run == 57016){
        double E_scattered = 5.71057 - uncorrected_beam_energy;
        double E_gamma_new = 5.71057 - E_scattered*0.998146;
        ret = E_gamma_new;
      }
      else if(run == 57017){
        double E_scattered = 5.71059 - uncorrected_beam_energy;
        double E_gamma_new = 5.71059 - E_scattered*0.998122;
        ret = E_gamma_new;
      }
      else if(run == 57021){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.99816;
        ret = E_gamma_new;
      }
      else if(run == 57022){
        double E_scattered = 5.71229 - uncorrected_beam_energy;
        double E_gamma_new = 5.71229 - E_scattered*0.998161;
        ret = E_gamma_new;
      }
      else if(run == 57023){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.99833;
        ret = E_gamma_new;
      }
      else if(run == 57025){
        double E_scattered = 5.71245 - uncorrected_beam_energy;
        double E_gamma_new = 5.71245 - E_scattered*0.998421;
        ret = E_gamma_new;
      }
      else if(run == 57026){
        double E_scattered = 5.71228 - uncorrected_beam_energy;
        double E_gamma_new = 5.71228 - E_scattered*0.99825;
        ret = E_gamma_new;
      }
      else if(run == 57027){
        double E_scattered = 5.71277 - uncorrected_beam_energy;
        double E_gamma_new = 5.71277 - E_scattered*0.998165;
        ret = E_gamma_new;
      }
      else if(run == 57028){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.99797;
        ret = E_gamma_new;
      }
      else if(run == 57030){
        double E_scattered = 5.71069 - uncorrected_beam_energy;
        double E_gamma_new = 5.71069 - E_scattered*0.99808;
        ret = E_gamma_new;
      }
      else if(run == 57031){
        double E_scattered = 5.70865 - uncorrected_beam_energy;
        double E_gamma_new = 5.70865 - E_scattered*0.997975;
        ret = E_gamma_new;
      }
      else if(run == 57032){
        double E_scattered = 5.71063 - uncorrected_beam_energy;
        double E_gamma_new = 5.71063 - E_scattered*0.997968;
        ret = E_gamma_new;
      }
      else if(run == 57036){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.998146;
        ret = E_gamma_new;
      }
      else if(run == 57037){
        double E_scattered = 5.71054 - uncorrected_beam_energy;
        double E_gamma_new = 5.71054 - E_scattered*0.997956;
        ret = E_gamma_new;
      }
      else if(run == 57038){
        double E_scattered = 5.71057 - uncorrected_beam_energy;
        double E_gamma_new = 5.71057 - E_scattered*0.997978;
        ret = E_gamma_new;
      }
      else if(run == 57039){
        double E_scattered = 5.71056 - uncorrected_beam_energy;
        double E_gamma_new = 5.71056 - E_scattered*0.998127;
        ret = E_gamma_new;
      }
      else if(run == 57061){
        double E_scattered = 5.71167 - uncorrected_beam_energy;
        double E_gamma_new = 5.71167 - E_scattered*0.998665;
        ret = E_gamma_new;
      }
      else if(run == 57062){
        double E_scattered = 5.71057 - uncorrected_beam_energy;
        double E_gamma_new = 5.71057 - E_scattered*0.998459;
        ret = E_gamma_new;
      }
      else if(run == 57063){
        double E_scattered = 5.71265 - uncorrected_beam_energy;
        double E_gamma_new = 5.71265 - E_scattered*0.998535;
        ret = E_gamma_new;
      }
      else if(run == 57064){
        double E_scattered = 5.71054 - uncorrected_beam_energy;
        double E_gamma_new = 5.71054 - E_scattered*0.998605;
        ret = E_gamma_new;
      }
      else if(run == 57065){
        double E_scattered = 5.71053 - uncorrected_beam_energy;
        double E_gamma_new = 5.71053 - E_scattered*0.99842;
        ret = E_gamma_new;
      }
      else if(run == 57066){
        double E_scattered = 5.71059 - uncorrected_beam_energy;
        double E_gamma_new = 5.71059 - E_scattered*0.998149;
        ret = E_gamma_new;
      }
      else if(run == 57067){
        double E_scattered = 5.71148 - uncorrected_beam_energy;
        double E_gamma_new = 5.71148 - E_scattered*0.998306;
        ret = E_gamma_new;
      }
      else if(run == 57068){
        double E_scattered = 5.71035 - uncorrected_beam_energy;
        double E_gamma_new = 5.71035 - E_scattered*0.998218;
        ret = E_gamma_new;
      }
      else if(run == 57069){
        double E_scattered = 5.71127 - uncorrected_beam_energy;
        double E_gamma_new = 5.71127 - E_scattered*0.99843;
        ret = E_gamma_new;
      }
      else if(run == 57071){
        double E_scattered = 5.71058 - uncorrected_beam_energy;
        double E_gamma_new = 5.71058 - E_scattered*0.998194;
        ret = E_gamma_new;
      }
      else if(run == 57072){
        double E_scattered = 5.7105 - uncorrected_beam_energy;
        double E_gamma_new = 5.7105 - E_scattered*0.998827;
        ret = E_gamma_new;
      }
      else if(run == 57073){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.998149;
        ret = E_gamma_new;
      }
      else if(run == 57075){
        double E_scattered = 5.7104 - uncorrected_beam_energy;
        double E_gamma_new = 5.7104 - E_scattered*0.998494;
        ret = E_gamma_new;
      }
      else if(run == 57076){
        double E_scattered = 5.71055 - uncorrected_beam_energy;
        double E_gamma_new = 5.71055 - E_scattered*0.998955;
        ret = E_gamma_new;
      }
      else if(run == 57077){
        double E_scattered = 5.71071 - uncorrected_beam_energy;
        double E_gamma_new = 5.71071 - E_scattered*0.999218;
        ret = E_gamma_new;
      }
      else if(run == 57078){
        double E_scattered = 5.71061 - uncorrected_beam_energy;
        double E_gamma_new = 5.71061 - E_scattered*0.998815;
        ret = E_gamma_new;
      }
      else if(run == 57079){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998983;
        ret = E_gamma_new;
      }
      else if(run == 57080){
        double E_scattered = 5.71094 - uncorrected_beam_energy;
        double E_gamma_new = 5.71094 - E_scattered*0.998977;
        ret = E_gamma_new;
      }
      else if(run == 57094){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998032;
        ret = E_gamma_new;
      }
      else if(run == 57095){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998245;
        ret = E_gamma_new;
      }
      else if(run == 57096){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998244;
        ret = E_gamma_new;
      }
      else if(run == 57097){
        double E_scattered = 5.7122 - uncorrected_beam_energy;
        double E_gamma_new = 5.7122 - E_scattered*0.998238;
        ret = E_gamma_new;
      }
      else if(run == 57100){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998157;
        ret = E_gamma_new;
      }
      else if(run == 57101){
        double E_scattered = 5.71061 - uncorrected_beam_energy;
        double E_gamma_new = 5.71061 - E_scattered*0.998271;
        ret = E_gamma_new;
      }
      else if(run == 57102){
        double E_scattered = 5.71094 - uncorrected_beam_energy;
        double E_gamma_new = 5.71094 - E_scattered*0.997936;
        ret = E_gamma_new;
      }
      else if(run == 57103){
        double E_scattered = 5.71092 - uncorrected_beam_energy;
        double E_gamma_new = 5.71092 - E_scattered*0.998198;
        ret = E_gamma_new;
      }
      else if(run == 57106){
        double E_scattered = 5.7111 - uncorrected_beam_energy;
        double E_gamma_new = 5.7111 - E_scattered*0.997767;
        ret = E_gamma_new;
      }
      else if(run == 57107){
        double E_scattered = 5.71411 - uncorrected_beam_energy;
        double E_gamma_new = 5.71411 - E_scattered*0.997939;
        ret = E_gamma_new;
      }
      else if(run == 57108){
        double E_scattered = 5.7111 - uncorrected_beam_energy;
        double E_gamma_new = 5.7111 - E_scattered*0.997843;
        ret = E_gamma_new;
      }
      else if(run == 57114){
        double E_scattered = 5.71196 - uncorrected_beam_energy;
        double E_gamma_new = 5.71196 - E_scattered*0.998233;
        ret = E_gamma_new;
      }
      else if(run == 57115){
        double E_scattered = 5.71099 - uncorrected_beam_energy;
        double E_gamma_new = 5.71099 - E_scattered*0.998205;
        ret = E_gamma_new;
      }
      else if(run == 57116){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998178;
        ret = E_gamma_new;
      }
      else if(run == 57117){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998111;
        ret = E_gamma_new;
      }
      else if(run == 57118){
        double E_scattered = 5.7132 - uncorrected_beam_energy;
        double E_gamma_new = 5.7132 - E_scattered*0.998416;
        ret = E_gamma_new;
      }
      else if(run == 57119){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.99815;
        ret = E_gamma_new;
      }
      else if(run == 57120){
        double E_scattered = 5.71106 - uncorrected_beam_energy;
        double E_gamma_new = 5.71106 - E_scattered*0.998182;
        ret = E_gamma_new;
      }
      else if(run == 57121){
        double E_scattered = 5.71116 - uncorrected_beam_energy;
        double E_gamma_new = 5.71116 - E_scattered*0.998114;
        ret = E_gamma_new;
      }
      else if(run == 57122){
        double E_scattered = 5.71105 - uncorrected_beam_energy;
        double E_gamma_new = 5.71105 - E_scattered*0.998121;
        ret = E_gamma_new;
      }
      else if(run == 57123){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998499;
        ret = E_gamma_new;
      }
      else if(run == 57124){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.99835;
        ret = E_gamma_new;
      }
      else if(run == 57125){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998143;
        ret = E_gamma_new;
      }
      else if(run == 57126){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.99827;
        ret = E_gamma_new;
      }
      else if(run == 57127){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998435;
        ret = E_gamma_new;
      }
      else if(run == 57128){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.998136;
        ret = E_gamma_new;
      }
      else if(run == 57129){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.998298;
        ret = E_gamma_new;
      }
      else if(run == 57130){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.99823;
        ret = E_gamma_new;
      }
      else if(run == 57131){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998124;
        ret = E_gamma_new;
      }
      else if(run == 57132){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998295;
        ret = E_gamma_new;
      }
      else if(run == 57133){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.998244;
        ret = E_gamma_new;
      }
      else if(run == 57134){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998184;
        ret = E_gamma_new;
      }
      else if(run == 57135){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.998233;
        ret = E_gamma_new;
      }
      else if(run == 57136){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.99837;
        ret = E_gamma_new;
      }
      else if(run == 57137){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.998185;
        ret = E_gamma_new;
      }
      else if(run == 57138){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.998379;
        ret = E_gamma_new;
      }
      else if(run == 57139){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998324;
        ret = E_gamma_new;
      }
      else if(run == 57140){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.998147;
        ret = E_gamma_new;
      }
      else if(run == 57141){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.998173;
        ret = E_gamma_new;
      }
      else if(run == 57142){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.99836;
        ret = E_gamma_new;
      }
      else if(run == 57143){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998883;
        ret = E_gamma_new;
      }
      else if(run == 57144){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.99829;
        ret = E_gamma_new;
      }
      else if(run == 57145){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998228;
        ret = E_gamma_new;
      }
      else if(run == 57146){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998075;
        ret = E_gamma_new;
      }
      else if(run == 57147){
        double E_scattered = 5.71102 - uncorrected_beam_energy;
        double E_gamma_new = 5.71102 - E_scattered*0.998593;
        ret = E_gamma_new;
      }
      else if(run == 57148){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998504;
        ret = E_gamma_new;
      }
      else if(run == 57149){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998156;
        ret = E_gamma_new;
      }
      else if(run == 57150){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998033;
        ret = E_gamma_new;
      }
      else if(run == 57151){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.998127;
        ret = E_gamma_new;
      }
      else if(run == 57152){
        double E_scattered = 5.71101 - uncorrected_beam_energy;
        double E_gamma_new = 5.71101 - E_scattered*0.997795;
        ret = E_gamma_new;
      }
      else if(run == 57155){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.99812;
        ret = E_gamma_new;
      }
      else if(run == 57156){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998228;
        ret = E_gamma_new;
      }
      else if(run == 57159){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998297;
        ret = E_gamma_new;
      }
      else if(run == 57160){
        double E_scattered = 5.7118 - uncorrected_beam_energy;
        double E_gamma_new = 5.7118 - E_scattered*0.998474;
        ret = E_gamma_new;
      }
      else if(run == 57161){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998184;
        ret = E_gamma_new;
      }
      else if(run == 57162){
        double E_scattered = 5.71093 - uncorrected_beam_energy;
        double E_gamma_new = 5.71093 - E_scattered*0.998019;
        ret = E_gamma_new;
      }
      else if(run == 57163){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998216;
        ret = E_gamma_new;
      }
      else if(run == 57164){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998302;
        ret = E_gamma_new;
      }
      else if(run == 57165){
        double E_scattered = 5.71403 - uncorrected_beam_energy;
        double E_gamma_new = 5.71403 - E_scattered*0.99828;
        ret = E_gamma_new;
      }
      else if(run == 57166){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998203;
        ret = E_gamma_new;
      }
      else if(run == 57167){
        double E_scattered = 5.7108 - uncorrected_beam_energy;
        double E_gamma_new = 5.7108 - E_scattered*0.998273;
        ret = E_gamma_new;
      }
      else if(run == 57168){
        double E_scattered = 5.71093 - uncorrected_beam_energy;
        double E_gamma_new = 5.71093 - E_scattered*0.998052;
        ret = E_gamma_new;
      }
      else if(run == 57170){
        double E_scattered = 5.71113 - uncorrected_beam_energy;
        double E_gamma_new = 5.71113 - E_scattered*0.998085;
        ret = E_gamma_new;
      }
      else if(run == 57171){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998137;
        ret = E_gamma_new;
      }
      else if(run == 57172){
        double E_scattered = 5.71307 - uncorrected_beam_energy;
        double E_gamma_new = 5.71307 - E_scattered*0.998227;
        ret = E_gamma_new;
      }
      else if(run == 57173){
        double E_scattered = 5.71307 - uncorrected_beam_energy;
        double E_gamma_new = 5.71307 - E_scattered*0.998232;
        ret = E_gamma_new;
      }
      else if(run == 57174){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998199;
        ret = E_gamma_new;
      }
      else if(run == 57175){
        double E_scattered = 5.7119 - uncorrected_beam_energy;
        double E_gamma_new = 5.7119 - E_scattered*0.998303;
        ret = E_gamma_new;
      }
      else if(run == 57176){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998145;
        ret = E_gamma_new;
      }
      else if(run == 57177){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998085;
        ret = E_gamma_new;
      }
      else if(run == 57178){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998253;
        ret = E_gamma_new;
      }
      else if(run == 57179){
        double E_scattered = 5.71303 - uncorrected_beam_energy;
        double E_gamma_new = 5.71303 - E_scattered*0.998406;
        ret = E_gamma_new;
      }
      else if(run == 57180){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998033;
        ret = E_gamma_new;
      }
      else if(run == 57181){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998187;
        ret = E_gamma_new;
      }
      else if(run == 57182){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.9982;
        ret = E_gamma_new;
      }
      else if(run == 57183){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.997856;
        ret = E_gamma_new;
      }
      else if(run == 57184){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998096;
        ret = E_gamma_new;
      }
      else if(run == 57185){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998069;
        ret = E_gamma_new;
      }
      else if(run == 57189){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998049;
        ret = E_gamma_new;
      }
      else if(run == 57190){
        double E_scattered = 5.71104 - uncorrected_beam_energy;
        double E_gamma_new = 5.71104 - E_scattered*0.998093;
        ret = E_gamma_new;
      }
      else if(run == 57191){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.997871;
        ret = E_gamma_new;
      }
      else if(run == 57192){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.998242;
        ret = E_gamma_new;
      }
      else if(run == 57193){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.998042;
        ret = E_gamma_new;
      }
      else if(run == 57194){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.998208;
        ret = E_gamma_new;
      }
      else if(run == 57195){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.998145;
        ret = E_gamma_new;
      }
      else if(run == 57196){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.998063;
        ret = E_gamma_new;
      }
      else if(run == 57197){
        double E_scattered = 5.70994 - uncorrected_beam_energy;
        double E_gamma_new = 5.70994 - E_scattered*0.997885;
        ret = E_gamma_new;
      }
      else if(run == 57198){
        double E_scattered = 5.71203 - uncorrected_beam_energy;
        double E_gamma_new = 5.71203 - E_scattered*0.998079;
        ret = E_gamma_new;
      }
      else if(run == 57199){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998087;
        ret = E_gamma_new;
      }
      else if(run == 57200){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998089;
        ret = E_gamma_new;
      }
      else if(run == 57201){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998086;
        ret = E_gamma_new;
      }
      else if(run == 57202){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.998131;
        ret = E_gamma_new;
      }
      else if(run == 57203){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.99812;
        ret = E_gamma_new;
      }
      else if(run == 57204){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998078;
        ret = E_gamma_new;
      }
      else if(run == 57205){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.997864;
        ret = E_gamma_new;
      }
      else if(run == 57206){
        double E_scattered = 5.70935 - uncorrected_beam_energy;
        double E_gamma_new = 5.70935 - E_scattered*0.997868;
        ret = E_gamma_new;
      }
      else if(run == 57207){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.997988;
        ret = E_gamma_new;
      }
      else if(run == 57208){
        double E_scattered = 5.71403 - uncorrected_beam_energy;
        double E_gamma_new = 5.71403 - E_scattered*0.998364;
        ret = E_gamma_new;
      }
      else if(run == 57209){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998012;
        ret = E_gamma_new;
      }
      else if(run == 57210){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.997768;
        ret = E_gamma_new;
      }
      else if(run == 57211){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998084;
        ret = E_gamma_new;
      }
      else if(run == 57212){
        double E_scattered = 5.71078 - uncorrected_beam_energy;
        double E_gamma_new = 5.71078 - E_scattered*0.997945;
        ret = E_gamma_new;
      }
      else if(run == 57213){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.9978;
        ret = E_gamma_new;
      }
      else if(run == 57214){
        double E_scattered = 5.7151 - uncorrected_beam_energy;
        double E_gamma_new = 5.7151 - E_scattered*0.998414;
        ret = E_gamma_new;
      }
      else if(run == 57215){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998085;
        ret = E_gamma_new;
      }
      else if(run == 57216){
        double E_scattered = 5.71533 - uncorrected_beam_energy;
        double E_gamma_new = 5.71533 - E_scattered*0.998309;
        ret = E_gamma_new;
      }
      else if(run == 57217){
        double E_scattered = 5.72218 - uncorrected_beam_energy;
        double E_gamma_new = 5.72218 - E_scattered*0.998731;
        ret = E_gamma_new;
      }
      else if(run == 57218){
        double E_scattered = 5.72215 - uncorrected_beam_energy;
        double E_gamma_new = 5.72215 - E_scattered*0.998797;
        ret = E_gamma_new;
      }
      else if(run == 57219){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.998827;
        ret = E_gamma_new;
      }
      else if(run == 57220){
        double E_scattered = 5.72218 - uncorrected_beam_energy;
        double E_gamma_new = 5.72218 - E_scattered*0.999001;
        ret = E_gamma_new;
      }
      else if(run == 57221){
        double E_scattered = 5.72215 - uncorrected_beam_energy;
        double E_gamma_new = 5.72215 - E_scattered*0.998883;
        ret = E_gamma_new;
      }
      else if(run == 57222){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.998858;
        ret = E_gamma_new;
      }
      else if(run == 57223){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.998849;
        ret = E_gamma_new;
      }
      else if(run == 57224){
        double E_scattered = 5.72215 - uncorrected_beam_energy;
        double E_gamma_new = 5.72215 - E_scattered*0.998893;
        ret = E_gamma_new;
      }
      else if(run == 57225){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.998903;
        ret = E_gamma_new;
      }
      else if(run == 57226){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.99883;
        ret = E_gamma_new;
      }
      else if(run == 57227){
        double E_scattered = 5.72215 - uncorrected_beam_energy;
        double E_gamma_new = 5.72215 - E_scattered*0.998841;
        ret = E_gamma_new;
      }
      else if(run == 57228){
        double E_scattered = 5.72218 - uncorrected_beam_energy;
        double E_gamma_new = 5.72218 - E_scattered*0.998806;
        ret = E_gamma_new;
      }
      else if(run == 57229){
        double E_scattered = 5.72218 - uncorrected_beam_energy;
        double E_gamma_new = 5.72218 - E_scattered*0.998655;
        ret = E_gamma_new;
      }
      else if(run == 57233){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.998793;
        ret = E_gamma_new;
      }
      else if(run == 57234){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.998879;
        ret = E_gamma_new;
      }
      else if(run == 57235){
        double E_scattered = 5.72216 - uncorrected_beam_energy;
        double E_gamma_new = 5.72216 - E_scattered*0.998639;
        ret = E_gamma_new;
      }
      else if(run == 57236){
        double E_scattered = 5.72215 - uncorrected_beam_energy;
        double E_gamma_new = 5.72215 - E_scattered*0.998816;
        ret = E_gamma_new;
      }
      else if(run == 57237){
        double E_scattered = 5.72215 - uncorrected_beam_energy;
        double E_gamma_new = 5.72215 - E_scattered*0.999086;
        ret = E_gamma_new;
      }
      else if(run == 57238){
        double E_scattered = 5.72216 - uncorrected_beam_energy;
        double E_gamma_new = 5.72216 - E_scattered*0.998827;
        ret = E_gamma_new;
      }
      else if(run == 57239){
        double E_scattered = 5.72216 - uncorrected_beam_energy;
        double E_gamma_new = 5.72216 - E_scattered*0.998186;
        ret = E_gamma_new;
      }
      else if(run == 57241){
        double E_scattered = 5.72217 - uncorrected_beam_energy;
        double E_gamma_new = 5.72217 - E_scattered*0.998256;
        ret = E_gamma_new;
      }
      else if(run == 57249){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.998201;
        ret = E_gamma_new;
      }
      else if(run == 57250){
        double E_scattered = 5.7111 - uncorrected_beam_energy;
        double E_gamma_new = 5.7111 - E_scattered*0.99804;
        ret = E_gamma_new;
      }
      else if(run == 57251){
        double E_scattered = 5.71105 - uncorrected_beam_energy;
        double E_gamma_new = 5.71105 - E_scattered*0.998241;
        ret = E_gamma_new;
      }
      else if(run == 57252){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998059;
        ret = E_gamma_new;
      }
      else if(run == 57253){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998105;
        ret = E_gamma_new;
      }
      else if(run == 57255){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998012;
        ret = E_gamma_new;
      }
      else if(run == 57256){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998081;
        ret = E_gamma_new;
      }
      else if(run == 57257){
        double E_scattered = 5.7107 - uncorrected_beam_energy;
        double E_gamma_new = 5.7107 - E_scattered*0.998247;
        ret = E_gamma_new;
      }
      else if(run == 57258){
        double E_scattered = 5.71107 - uncorrected_beam_energy;
        double E_gamma_new = 5.71107 - E_scattered*0.998081;
        ret = E_gamma_new;
      }
      else if(run == 57260){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.997925;
        ret = E_gamma_new;
      }
      else if(run == 57261){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998076;
        ret = E_gamma_new;
      }
      else if(run == 57262){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998401;
        ret = E_gamma_new;
      }
      else if(run == 57263){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998127;
        ret = E_gamma_new;
      }
      else if(run == 57264){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998077;
        ret = E_gamma_new;
      }
      else if(run == 57265){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998082;
        ret = E_gamma_new;
      }
      else if(run == 57266){
        double E_scattered = 5.7111 - uncorrected_beam_energy;
        double E_gamma_new = 5.7111 - E_scattered*0.999738;
        ret = E_gamma_new;
      }
      else if(run == 57267){
        double E_scattered = 5.7111 - uncorrected_beam_energy;
        double E_gamma_new = 5.7111 - E_scattered*0.997869;
        ret = E_gamma_new;
      }
      else if(run == 57268){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998034;
        ret = E_gamma_new;
      }
      else if(run == 57270){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998104;
        ret = E_gamma_new;
      }
      else if(run == 57271){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.99798;
        ret = E_gamma_new;
      }
      else if(run == 57272){
        double E_scattered = 5.71123 - uncorrected_beam_energy;
        double E_gamma_new = 5.71123 - E_scattered*0.997976;
        ret = E_gamma_new;
      }
      else if(run == 57273){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998166;
        ret = E_gamma_new;
      }
      else if(run == 57274){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.997893;
        ret = E_gamma_new;
      }
      else if(run == 57275){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998227;
        ret = E_gamma_new;
      }
      else if(run == 57276){
        double E_scattered = 5.71233 - uncorrected_beam_energy;
        double E_gamma_new = 5.71233 - E_scattered*0.998174;
        ret = E_gamma_new;
      }
      else if(run == 57277){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998186;
        ret = E_gamma_new;
      }
      else if(run == 57278){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998216;
        ret = E_gamma_new;
      }
      else if(run == 57279){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998265;
        ret = E_gamma_new;
      }
      else if(run == 57280){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998103;
        ret = E_gamma_new;
      }
      else if(run == 57281){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998001;
        ret = E_gamma_new;
      }
      else if(run == 57282){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998088;
        ret = E_gamma_new;
      }
      else if(run == 57283){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998216;
        ret = E_gamma_new;
      }
      else if(run == 57284){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998223;
        ret = E_gamma_new;
      }
      else if(run == 57285){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.997984;
        ret = E_gamma_new;
      }
      else if(run == 57286){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.99809;
        ret = E_gamma_new;
      }
      else if(run == 57287){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998023;
        ret = E_gamma_new;
      }
      else if(run == 57288){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998237;
        ret = E_gamma_new;
      }
      else if(run == 57290){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998331;
        ret = E_gamma_new;
      }
      else if(run == 57291){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.99827;
        ret = E_gamma_new;
      }
      else if(run == 57293){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.998115;
        ret = E_gamma_new;
      }
      else if(run == 57294){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*1.00051;
        ret = E_gamma_new;
      }
      else if(run == 57295){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998115;
        ret = E_gamma_new;
      }
      else if(run == 57296){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998091;
        ret = E_gamma_new;
      }
      else if(run == 57297){
        double E_scattered = 5.71088 - uncorrected_beam_energy;
        double E_gamma_new = 5.71088 - E_scattered*0.998152;
        ret = E_gamma_new;
      }
      else if(run == 57298){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998156;
        ret = E_gamma_new;
      }
      else if(run == 57299){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998202;
        ret = E_gamma_new;
      }
      else if(run == 57300){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998142;
        ret = E_gamma_new;
      }
      else if(run == 57301){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998012;
        ret = E_gamma_new;
      }
      else if(run == 57302){
        double E_scattered = 5.71098 - uncorrected_beam_energy;
        double E_gamma_new = 5.71098 - E_scattered*0.998292;
        ret = E_gamma_new;
      }
      else if(run == 57303){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.998118;
        ret = E_gamma_new;
      }
      else if(run == 57304){
        double E_scattered = 5.71095 - uncorrected_beam_energy;
        double E_gamma_new = 5.71095 - E_scattered*0.998038;
        ret = E_gamma_new;
      }
      else if(run == 57305){
        double E_scattered = 5.71105 - uncorrected_beam_energy;
        double E_gamma_new = 5.71105 - E_scattered*0.99812;
        ret = E_gamma_new;
      }
      else if(run == 57306){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.997931;
        ret = E_gamma_new;
      }
      else if(run == 57307){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.997962;
        ret = E_gamma_new;
      }
      else if(run == 57308){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998147;
        ret = E_gamma_new;
      }
      else if(run == 57309){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998134;
        ret = E_gamma_new;
      }
      else if(run == 57310){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.997919;
        ret = E_gamma_new;
      }
      else if(run == 57311){
        double E_scattered = 5.711 - uncorrected_beam_energy;
        double E_gamma_new = 5.711 - E_scattered*0.998107;
        ret = E_gamma_new;
      }
      else if(run == 57312){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998161;
        ret = E_gamma_new;
      }
      else if(run == 57315){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.998106;
        ret = E_gamma_new;
      }
      else if(run == 57316){
        double E_scattered = 5.71097 - uncorrected_beam_energy;
        double E_gamma_new = 5.71097 - E_scattered*0.997952;
        ret = E_gamma_new;
      }
      else if(run == 57317){
        double E_scattered = 5.71103 - uncorrected_beam_energy;
        double E_gamma_new = 5.71103 - E_scattered*0.997881;
        ret = E_gamma_new;
      }
      else {
        cout<<"Unknown run number "<<run<<endl;
        //throw std::domain_error("Unknown run number");
      }
      return ret;
    }
    //#####################################################################################
    //###################### Time-of-Flight Knockout per SC paddle ######################

    bool pass_g12_TOFKO(int sector, int scid, bool all_ko = 0) // second option is defaults to false and will only knock out paddles based on bad occupancy. If true, it will knock out paddles with significant drifts on their resolutions
    {
      bool passed = 1; // Default value to return is true
      
      if( sector == 1 && (scid == 6 || scid == 35 || scid == 40 || scid == 41 || scid == 50 || scid == 56)) // bad paddles in sector 1
        passed = 0;
      if( sector == 2 && (scid == 2 || scid == 8 || scid == 34 || scid == 35 || scid == 41 || scid == 44 || scid == 50 || scid == 54 || scid == 56)) //bad paddles in sector 2
        passed = 0;
      if( sector == 3 && (scid == 11 || scid == 35 || scid == 40 || scid == 41 || scid == 56)) // bad paddles in sector 3
        passed = 0;
      if( sector == 4 && (scid == 41 || scid == 48)) // bad paddles in sector 4
        passed = 0;
      if( sector == 5 && scid == 48) // bad paddles in sector 5
        passed = 0;
      if( sector == 6 && (scid == 1 || scid == 5 || scid == 33 || scid == 56)) // bad paddles in sector 6
        passed = 0;
      
      if( all_ko)
      {
        if( sector == 1 && (scid == 25 || scid == 26) ) // bad paddles in sector 1
          passed = 0;
        
        if( sector == 2 && (scid == 18 || scid == 25 || scid ==27) ) // bad paddles in sector 2
          passed = 0;
        
        if( sector == 3 && (scid == 1 || scid == 18 || scid == 23)) // bad paddles in sector 3
          passed = 0;
        
        if( sector == 4 && (scid == 8 || scid == 19)) // bad paddles in sector 4
          passed = 0;
        
        if( sector == 6 && (scid == 24)) // bad paddles in sector 6
          passed = 0;
      }
      
      return passed;
    }
    //#####################################################################################
    //###################### Time-of-Flight Knockout via angles ###########################
    //Purpose: Perform TOF knockouts
    //Based off pi+ theta vs phi  plots
    //Input: theta phi sector
    //Output: Pass or fail
    
    //Updated: February 27, 2014
    
    //Corrections were done by Michael C. Kunkel
    //mkunkel@jlab.org
    bool pass_g12_TOF_knockout(float theta, float phi, int sec){
      
      double phi_shifted = fmod((phi+390.),360);
      phi_shifted = fmod(phi_shifted,60) - 30.;
      
      if (sec ==1) {
        if (phi<0. && theta <= 24.+((26.-24.)/-30.)*phi && theta >= 21.5+((23.5-21.5)/-30.)*phi) {
          return false;
        }
        else if(phi>=0. && theta <= 24.+((26.-24.)/30.)*phi && theta >= 21.5+((23.5-21.5)/30.)*phi){
          return false;
        }
        else{
          return true;
        }
      }
      
      
      else if (sec ==3) {
        if (phi_shifted<0. && theta <= 20.5+((22.-20.5)/-30.)*phi_shifted && theta >= 16.+((17.5-16.)/-30.)*phi_shifted) {
          return false;
        }
        else if(phi_shifted>=0. && theta <= 20.5+((22.-20.5)/30.)*phi_shifted && theta >= 16.+((17.5-16.)/30.)*phi_shifted){
          return false;
        }
        else{
          return true;
        }
      }
      else{
        return true;
      }
      
    }
    //#####################################################################################
    //################################ EC Fiducial Cuts ###################################
    //Purpose: EC fiducial cuts
    //Input: EC u, v, w,
    //Output: Pass or fail
    
    //Updated: February 27, 2014
    
    //Corrections were done by Michael C. Kunkel
    //mkunkel@jlab.org
    bool pass_g12_ec_fiducial(float u, float v, float w){
      
      if ((u>=20.0) && (u<=400.0) && (v<=375.0) && (w<=405.0)) {
        return true;
      }
      else{
        return false;
      }
      
    }
    //#####################################################################################
    //############################## EC BAD strip Knockout ################################
    //Corrections were derived from the p pi_plus pi_minus exclusive reaction
    //Input: EC inner energy, EC outer energy, U, V, W, and Sector
    //Output: Pass or fail
    
    //Updated: February 27, 2014
    
    //Corrections were done by Michael C. Kunkel
    //mkunkel@jlab.org
    bool pass_g12_ec_knockout(float ECin, float ECout, float u, float v, float w, int sec){
      int passed;// = 1;
      
      //First lets take normal fiducial cuts
      
      if ((u>=20.0) && (u<=400.0) && (v<=375.0) && (w<=405.0)) {
        passed = 1;
      }
      else{
        return false;
      }
      
      //End Fiducial cuts
      
      //Start EC Knockout
      if (sec ==1) {
        if (ECin>0.) {
          if (w<=324. && w>=312.) {
            passed = 0;
          }
        }
      }
      
      else if (sec ==2) {
        if (ECin>0.) {
          if ((u<=108. && u>=96.) || (u<=336. && u>=324.) || (w<=408. && w>=396.)) {
            passed = 0;
          }
        }
        if (ECout>0.) {
          if ((u<=336. && u>=324.)) {
            passed = 0;
          }
        }
      }
      
      else if (sec ==3) {
        if (ECin>0.) {
          if ((u<=336. && u>=324.) || (u<=216. && u>=180.) || (u<=337. && u>=324.)|| (w<=408. && w>=396.)) {
            passed = 0;
          }
        }
        if (ECout>0.) {
          if ((u<=142. && u>=131.) || (u<=216. && u>=204.) || (u<=336. && u>=324.)) {
            passed = 0;
          }
        }
      }
      
      else if (sec ==5) {
        if (ECin>0.) {
          if ((v<=342. && v>=320.) || (v<=242. && v>=254.) || (w<=372. && w>=336.) || (w<=312. && w>=288.) || (w<=276. && w>=240.) || (w<=228. && w>=168.) || (w<=144. && w>=132.)) {
            passed = 0;
          }
        }
        if (ECout>0.) {
          if ((u<=192. && u>=180.) || (u<=240. && u>=204.)) {
            passed = 0;
          }
        }
      }
      
      else if (sec ==6) {
        if (ECin>0.) {
          if ((w>=396.)) {
            passed = 0;
          }
        }
      }
      if (passed) {
        return true;
      }
      else {
        return false;
      }
      
    }
    //#####################################################################################
    //############################## EC XYZ to UVW ################################
    //CProgram to recalculate EC u, v, w from the x y z coordinate system
    //Input: x y z
    //Output: u v w
    
    //Updated: February 27, 2014
    
    //Corrections were done by Michael C. Kunkel
    //mkunkel@jlab.org
    TVector3 g12_ECxyz_2uvw(float x, float y, float z){
      TVector3 UVW;
      
      float ec_the = 0.4363323;
      float ylow = -182.974;
      float yhi = 189.956;
      float tgrho = 1.95325;
      float sinrho = 0.8901256;
      float cosrho = 0.455715;
      float u, v, w;
      float rot11, rot12, rot13;
      float rot21, rot22, rot23;
      float rot31, rot32, rot33;
      //float x, y, z;
      float xi, yi, zi;
      float ec_phi, phi;
      
      phi=atan2(y,x)*57.29578;
      if(phi<=0.)phi=phi+360.;
      phi=phi+30.;
      if(phi>=360.)phi=phi-360.;
      ec_phi=int(phi/60.)*1.0471975;
      
      rot11 = cos(ec_the)*cos(ec_phi);
      rot12 = -sin(ec_phi);
      rot13 = sin(ec_the)*cos(ec_phi);
      rot21 = cos(ec_the)*sin(ec_phi);
      rot22 = cos(ec_phi);
      rot23 = sin(ec_the)*sin(ec_phi);
      rot31 = -sin(ec_the);
      rot32 = 0.0;
      rot33 = cos(ec_the);
      
      yi = x*rot11 + y*rot21 + z*rot31;
      xi = x*rot12 + y*rot22 + z*rot32;
      zi = x*rot13 + y*rot23 + z*rot33;
      zi-=510.32;
      
      u = (yi-ylow)/sinrho;
      v = (2.0*yhi-ylow-yi)/tgrho - xi;
      w=((yhi-ylow)/tgrho + xi + (yhi-yi)/tgrho)/2./cosrho;
      
      UVW.SetXYZ(u,v,w);
      return UVW;
      
    }
    //#####################################################################################
    //########################## Mometum & Phi shift corection ############################
    
    namespace pid
    {
      typedef enum particle_enum
      {
        electron   = 2,
        positron   = 3,
        piplus     = 8,
        piminus    = 9,
        kplus      = 11,
        kminus     = 12,
        proton     = 14,
      } particle_t;
    }
    
    class MomentumCorrection
    {
    private:
      std::map<int, vector<vector<float> > >_pcor_map;
      bool _verbose;
      
    public:
      MomentumCorrection(bool verbose=false)
      {
        _verbose = verbose;
        
        _pcor_map[pid::proton] = vector<vector<float> >(6);
        _pcor_map[pid::piplus] = vector<vector<float> >(6);
        _pcor_map[pid::piminus] = vector<vector<float> >(6);
        _pcor_map[pid::kplus] = vector<vector<float> >(6);
        _pcor_map[pid::kminus] = vector<vector<float> >(6);
        
        TString infile = correction_dir+"/pcor/g12/pcor.txt";
        
        ifstream fin(infile.Data());
        if (!fin.is_open())
        {
          cout<<"Not opened"<<infile<<endl;
          
          //throw std::runtime_error(string("error opening pcor file: ")+infile);
        }
        
        string fin_line;
        string partid;
        int sec;
        float p1;
        float p0;
        
        
        if (_verbose)
        {
          clog << "\nGetting momentum correction parameters:\n";
        }
        while (fin.good())
        {
          getline(fin, fin_line);
          if (fin_line[0] != '#' && fin_line.size() > 0)
          {
            stringstream ss;
            ss << fin_line;
            ss >> partid >> sec >> p1 >> p0;
            
            pid::particle_t id;
            
            if (partid == "p")
            {
              id = pid::proton;
            }
            else if (partid == "pi+" || partid == "e+")
            {
              id = pid::piplus;
            }
            else if (partid == "pi-" || partid == "e-")
            {
              id = pid::piminus;
            }
            else if (partid == "K+")
            {
              id = pid::kplus;
            }
            else if (partid == "K-")
            {
              id = pid::kminus;
            }
            else{
              fprintf(stderr,"In Momentum corrections, you entered an incorrect PID for the g12 scheme. \n");
              fprintf(stderr,"Default is Proton Momentum correction \n");
              id = pid::proton;
              exit(0);
            }
            
            
            _pcor_map[id][sec-1].push_back(p1);
            _pcor_map[id][sec-1].push_back(p0);
            
            if (_verbose)
            {
              clog << "    " << partid << " " << sec
              << " " << p1 << " " << p0 << endl;
            }
          }
        }
      }
      
      template <typename T>
      inline
      T pcor(const T& phi, const int& part_id)
      {
        /// adjust phi so it goes from -30 to 30
        static const T rad2deg = 180.0 / 3.14159265;
        T phi_shifted = fmod((phi*rad2deg+390.),360);
        int sec = int(phi_shifted / 60.) + 1;
        phi_shifted = fmod(phi_shifted,60) - 30.;
        
        
        T pcorrection = _pcor_map[part_id][sec-1][0] * phi_shifted + _pcor_map[part_id][sec-1][1];
        
        if (_verbose)
        {
          clog << "\npid, phi, phi_shifted, pcor= " << part_id
          << " " << phi << " " << phi_shifted
          << " " << pcorrection;
        }
        
        /// returns the (additive) correction to the absolute value
        /// of the momentum of the track in GeV
        return (0.001*pcorrection);
      }
    };
    //#####################################################################################
    //########################## Track Efficiency ############################
    //Purpose: track efficiency
    //Input: Vz, Ptot, Theta, Phi  ##Vz is z-vertex : Ptot is track total momemtum
    //## Theta is lab angle theta : Phi is lab angle phi
    //Output: track efficiency
    
    //Updated: July 07, 2015
    
    //Corrections were done by Michael C. Kunkel
    //mkunkel@jlab.org
    double g12_trackEfficiency(double Vz, double P_Ptot_fit, double P_Phi_fit, double P_Theta_fit, double Ep_Ptot_fit,double Ep_Phi_fit, double Ep_Theta_fit, double Em_Ptot_fit, double Em_Phi_fit, double Em_Theta_fit, TString DEG_or_RAD, bool MultPhoton){
      
      
      Double_t tot_eff = 0.0;
      
      
      TString P_location;
      TString Ep_location;
      TString Em_location;
      
      if (MultPhoton) {
        P_location = correction_dir + "EFFICIENCY_HISTS/Efficiency_Plots_Compared_Prot_multbeam.root";
        Ep_location = correction_dir + "EFFICIENCY_HISTS/Efficiency_Plots_Compared_Pip_multbeam.root";
        Em_location = correction_dir + "EFFICIENCY_HISTS/Efficiency_Plots_Compared_Pim_multbeam.root";
      }else{
        P_location = correction_dir + "EFFICIENCY_HISTS/Efficiency_Plots_Compared_Prot_new.root";
        Ep_location = correction_dir + "EFFICIENCY_HISTS/Efficiency_Plots_Compared_Pip_new.root";
        Em_location = correction_dir + "EFFICIENCY_HISTS/Efficiency_Plots_Compared_Pim_new.root";
      }
      
      
      TFile P_Data(P_location,"READ");
      TFile Ep_Data(Ep_location,"READ");
      TFile Em_Data(Em_location,"READ");
      
      TString rad = "radian";
      TString deg = "degree";
      Double_t RAD2DEG = 180./TMath::Pi();
      if (!DEG_or_RAD.CompareTo(rad,  TString::kIgnoreCase) ) {
        //cout<<"We have radians"<<endl;
        P_Phi_fit =  P_Phi_fit*RAD2DEG;
        P_Theta_fit =  P_Theta_fit*RAD2DEG;
        
        Ep_Phi_fit =  Ep_Phi_fit*RAD2DEG;
        Ep_Theta_fit =  Ep_Theta_fit*RAD2DEG;
        
        Em_Phi_fit =  Em_Phi_fit*RAD2DEG;
        Em_Theta_fit =  Em_Theta_fit*RAD2DEG;
        
      }
      else if(!DEG_or_RAD.CompareTo(deg,  TString::kIgnoreCase)){
        //cout<<"We have degrees"<<endl;
      }else{cout<<"YOU HAVE NOT ENETERED A CORRECT UNIT....PLEASE CHECK RADIAN OR DEGREE"<<endl; return 0;}
      
      Double_t event_prot_eff = 0.0;
      Double_t event_Ep_eff = 0.0;
      Double_t event_Em_eff = 0.0;
      if (fabs(Vz + 90.) > 20.) {return 0;}
      //if (Vz< -150.) {cout<<"here"<<endl;return 0;}
      TString P_value = Prot_Hist_num(Vz,P_Ptot_fit);
      TString Ep_value = Pip_Hist_num(Vz,Ep_Ptot_fit);
      TString Em_value = Pim_Hist_num(Vz,Em_Ptot_fit);
      
      //cout<<P_value<<"  "<<Ep_value<<"  "<<Em_value<<endl;
      
      
      if (P_value =="") {
        event_prot_eff = 0.0;
        //cout<<Vz<<endl;
      }
      else{
        TH2D *hEff_P= (TH2D*)P_Data.Get(P_value);
        for (int x = 1; x<=hEff_P->GetNbinsX(); x++) {
          for (int y = 1; y<=hEff_P->GetNbinsY(); y++) {
            if (std::abs(P_Theta_fit*sin(P_Phi_fit*TMath::Pi()/180.) - hEff_P->GetXaxis()->GetBinCenter(x)) <= 4. && std::abs(P_Theta_fit*cos(P_Phi_fit*TMath::Pi()/180.) - hEff_P->GetYaxis()->GetBinCenter(y)) <= 4.) {
              //cout<<hEff_P->GetBinContent(x,y)<<endl;
              event_prot_eff = hEff_P->GetBinContent(x,y);
            }
            //cout<<hEff_P->GetBinContent(x,y)<<endl;
          }
        }
      }
      if (Ep_value =="") {
        event_Ep_eff = 0.0;
      }
      else{
        //cout<<event_Ep_eff<<" inside loop "<<Ep_value<<"\t"<<Ep_Theta_fit*sin(Ep_Phi_fit*TMath::Pi()/180.)<<"\t"<<Ep_Theta_fit*cos(Ep_Phi_fit*TMath::Pi()/180.) <<endl;
        TH2D *hEff_Ep= (TH2D*)Ep_Data.Get(Ep_value);
        for (int x = 1; x<=hEff_Ep->GetNbinsX(); x++) {
          for (int y = 1; y<=hEff_Ep->GetNbinsY(); y++) {
            if (std::abs(Ep_Theta_fit*sin(Ep_Phi_fit*TMath::Pi()/180.) - hEff_Ep->GetXaxis()->GetBinCenter(x)) <= 4. && std::abs(Ep_Theta_fit*cos(Ep_Phi_fit*TMath::Pi()/180.) - hEff_Ep->GetYaxis()->GetBinCenter(y)) <= 4.) {
              //cout<<hEff_Ep->GetBinContent(x,y)<<endl;
              event_Ep_eff = hEff_Ep->GetBinContent(x,y);
            }
            //cout<<hPimEff_I_II->GetBinContent(x,y)<<"  "<<hEff_plot->GetBinContent(x,y)<<endl;
          }
        }
      }
      if (Em_value =="") {
        event_Ep_eff = 0.0;
      }
      else{
        //cout<<event_Em_eff<<" inside loop "<<Em_value<<"\t"<<Em_Theta_fit*sin(Em_Phi_fit*TMath::Pi()/180.)<<"\t"<<Em_Theta_fit*cos(Em_Phi_fit*TMath::Pi()/180.) <<endl;
        
        TH2D *hEff_Em= (TH2D*)Em_Data.Get(Em_value);
        for (int x = 1; x<=hEff_Em->GetNbinsX(); x++) {
          for (int y = 1; y<=hEff_Em->GetNbinsY(); y++) {
            if (std::abs(Em_Theta_fit*sin(Em_Phi_fit*TMath::Pi()/180.) - hEff_Em->GetXaxis()->GetBinCenter(x)) <= 4. && std::abs(Em_Theta_fit*cos(Em_Phi_fit*TMath::Pi()/180.) - hEff_Em->GetYaxis()->GetBinCenter(y)) <= 4.) {
              //cout<<hEff_plot->GetBinContent(x,y)<<endl;
              event_Em_eff = hEff_Em->GetBinContent(x,y);
            }
            //cout<<hPimEff_I_II->GetBinContent(x,y)<<"  "<<hEff_plot->GetBinContent(x,y)<<endl;
          }
        }
      }
      
      P_Data.Close();
      Ep_Data.Close();
      Em_Data.Close();
      //      cout<<"##################### IN HPP FILE ##########################"<<endl;
      //      cout<<event_Em_eff<<"\t"<<event_Ep_eff<<"\t"<<event_prot_eff<<endl;
      //      cout<<"############################################################"<<endl;
      
      tot_eff = event_Em_eff*event_Ep_eff*event_prot_eff;
      
      P_Data.Close();
      Ep_Data.Close();
      Em_Data.Close();
      return tot_eff;
      
      
    }
    
    TString Pim_Hist_num(Double_t z, Double_t p){
      
      
      //cout<<"I am active"<<endl;
      //cout<<p<<"\t"<<z<<endl;
      if (z <= -105.  ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_I_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_I_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_I_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_I_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_I_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_I_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_I_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_I_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -100. && z > -105. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_II_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_II_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_II_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_II_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_II_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_II_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_II_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_II_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -95. && z > -100. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_III_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_III_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_III_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_III_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_III_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_III_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_III_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_III_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -90. && z > -95. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_IV_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_IV_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_IV_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_IV_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_IV_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_IV_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_IV_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_IV_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -85. && z > -90. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_V_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_V_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_V_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_V_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_V_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_V_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_V_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_V_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -80. && z > -85. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_VI_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_VI_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_VI_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_VI_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_VI_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_VI_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_VI_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_VI_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -75. && z > -80. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_VII_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_VII_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_VII_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_VII_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_VII_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_VII_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_VII_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_VII_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z > -75. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPimEff_VIII_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPimEff_VIII_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPimEff_VIII_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPimEff_VIII_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPimEff_VIII_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPimEff_VIII_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPimEff_VIII_VII";
        }
        
        else if ( p > 3. ) {
          return "hPimEff_VIII_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else {
        //cout<<"NOT IN BOUNDS WITH z VERTEX"<<endl;
        return "";
      }
      
      //cout<<"I am at the end "<<z<<"  "<<p<<endl;
      
    }
    
    
    TString Pip_Hist_num(Double_t z, Double_t p){
      
      
      //cout<<"I am active"<<endl;
      //cout<<p<<"\t"<<z<<endl;
      if (z <= -105.  ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_I_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_I_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_I_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_I_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_I_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_I_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_I_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_I_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -100. && z > -105. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_II_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_II_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_II_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_II_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_II_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_II_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_II_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_II_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -95. && z > -100. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_III_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_III_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_III_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_III_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_III_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_III_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_III_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_III_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -90. && z > -95. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_IV_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_IV_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_IV_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_IV_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_IV_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_IV_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_IV_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_IV_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -85. && z > -90. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_V_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_V_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_V_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_V_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_V_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_V_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_V_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_V_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -80. && z > -85. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_VI_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_VI_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_VI_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_VI_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_VI_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_VI_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_VI_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_VI_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -75. && z > -80. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_VII_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_VII_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_VII_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_VII_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_VII_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_VII_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_VII_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_VII_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z > -75. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hPipEff_VIII_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hPipEff_VIII_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hPipEff_VIII_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hPipEff_VIII_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hPipEff_VIII_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hPipEff_VIII_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hPipEff_VIII_VII";
        }
        
        else if ( p > 3. ) {
          return "hPipEff_VIII_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else {
        //cout<<"NOT IN BOUNDS WITH z VERTEX"<<endl;
        return "";
      }
      
      //cout<<"I am at the end "<<z<<"  "<<p<<endl;
      
    }
    
    
    TString Prot_Hist_num(Double_t z, Double_t p){
      
      
      //cout<<"I am active"<<endl;
      if (z <= -105.  ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_I_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_I_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_I_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_I_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_I_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_I_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_I_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_I_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -100. && z > -105. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_II_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_II_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_II_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_II_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_II_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_II_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_II_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_II_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -95. && z > -100. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_III_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_III_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_III_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_III_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_III_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_III_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_III_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_III_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -90. && z > -95. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_IV_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_IV_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_IV_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_IV_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_IV_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_IV_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_IV_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_IV_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -85. && z > -90. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_V_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_V_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_V_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_V_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_V_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_V_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_V_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_V_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -80. && z > -85. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_VI_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_VI_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_VI_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_VI_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_VI_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_VI_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_VI_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_VI_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z <= -75. && z > -80. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_VII_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_VII_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_VII_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_VII_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_VII_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_VII_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_VII_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_VII_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else if (z > -75. ){
        
        if (p <= 0.5 && p > 0. ) {
          return "hProtEff_VIII_I";
        }
        
        else if (p <= 0.75 && p > 0.5 ) {
          return "hProtEff_VIII_II";
        }
        
        else if (p <= 1. && p > 0.75 ) {
          return "hProtEff_VIII_III";
        }
        
        else if (p <= 1.5 && p > 1. ) {
          return "hProtEff_VIII_IV";
        }
        
        else if (p <= 2. && p > 1.5 ) {
          return "hProtEff_VIII_V";
        }
        
        else if (p <= 2.5 && p > 2. ) {
          return "hProtEff_VIII_VI";
        }
        
        else if (p <= 3. && p > 2.5 ) {
          return "hProtEff_VIII_VII";
        }
        
        else if ( p > 3. ) {
          return "hProtEff_VIII_VIII";
        }
        
        else {
          cout<<"NOT IN BOUNDS WITH MOMENTUM"<<endl; return "";
        }
        
      }
      
      else {
        //cout<<"NOT IN BOUNDS WITH z VERTEX"<<endl;
        return "";
      }
      
      //cout<<"I am at the end "<<z<<"  "<<p<<endl;
      
    }
    
    
    //########################## Track Fiducial Cuts ############################
    //Purpose: Output if track passes G12 fiducial cuts
    //Input: Lab Mometum (Pmom), Lab angle theta (Theta), Lab angle phi (Phi), charge of track (q), directory of fiducail parameter .txt file and type of cut (type_of_cut)
    //type_of_cut: Loose, Tight, Nominal
    //Output: pass/fail
    
    //Updated: March 27, 2014
    
    //Corrections were done by Jason Bono
    //Program written by Michael C. Kunkel
    //mkunkel@jlab.org
    
    //######################### NOTE ##########################
    
    //ALL VARIABLES IN LAB FRAME, ALL ANGLES IN DEGREES!!!!!!
    
    //#########################################################
    
    float FidFunc_pos(float *, float *);
    float FidFunc_neg(float *, float *);
    
    bool g12_PosParticle_fiducial_cuts(float Pmom, float Theta, float Phi, const std::string& type_of_cut ){
      
      const int Ns = 6;  //number of sectors
      float parL[Ns][9];
      float parH[Ns][9];
      
      parL[0][0] = -2295.59; parL[0][1] = 0.000700362; parL[0][2] = 2266.32;
      parL[0][3] = -198822; parL[0][4] = 0.000363836; parL[0][5] = 198706;
      parL[0][6] = -198764; parL[0][7] = 3.78601e-05; parL[0][8] = 198763;
      parL[1][0] = -2295.45; parL[1][1] = 0.000812151; parL[1][2] = 2266.18;
      parL[1][3] = -198812; parL[1][4] = 0.000280686; parL[1][5] = 198716;
      parL[1][6] = -198764; parL[1][7] = 3.58984e-05; parL[1][8] = 198764;
      parL[2][0] = -2295.01; parL[2][1] = 0.000510464; parL[2][2] = 2266.32;
      parL[2][3] = -198801; parL[2][4] = 0.000167734; parL[2][5] = 198726;
      parL[2][6] = -198762; parL[2][7] = 1.81963e-05; parL[2][8] = 198765;
      parL[3][0] = -2295.19; parL[3][1] = 0.000596059; parL[3][2] = 2265.85;
      parL[3][3] = -198819; parL[3][4] = 0.000275454; parL[3][5] = 198709;
      parL[3][6] = -198764; parL[3][7] = 2.2017e-05; parL[3][8] = 198764;
      parL[4][0] = -2294.95; parL[4][1] = 0.000629762; parL[4][2] = 2265.82;
      parL[4][3] = -198817; parL[4][4] = 0.000300642; parL[4][5] = 198710;
      parL[4][6] = -198764; parL[4][7] = 2.36482e-05; parL[4][8] = 198764;
      parL[5][0] = -2294.57; parL[5][1] = 0.000587603; parL[5][2] = 2265.88;
      parL[5][3] = -198801; parL[5][4] = 0.000264759; parL[5][5] = 198726;
      parL[5][6] = -198763; parL[5][7] = 3.49751e-05; parL[5][8] = 198764;
      
      parH[0][0] = -2266.96; parH[0][1] = -0.000136134; parH[0][2] = 2294.8;
      parH[0][3] = -198725; parH[0][4] = -4.85729e-06; parH[0][5] = 198803;
      parH[0][6] = -198764; parH[0][7] = 2.91321e-05; parH[0][8] = 198764;
      parH[1][0] = -2266.48; parH[1][1] = -0.00054583; parH[1][2] = 2294.99;
      parH[1][3] = -198715; parH[1][4] = -0.00022386; parH[1][5] = 198813;
      parH[1][6] = -198763; parH[1][7] = 2.46949e-05; parH[1][8] = 198764;
      parH[2][0] = -2266.63; parH[2][1] = -0.00041358; parH[2][2] = 2294.55;
      parH[2][3] = -198732; parH[2][4] = -0.000165719; parH[2][5] = 198796;
      parH[2][6] = -198762; parH[2][7] = 2.36424e-05; parH[2][8] = 198765;
      parH[3][0] = -2266.56; parH[3][1] = -0.000353913; parH[3][2] = 2294.34;
      parH[3][3] = -198733; parH[3][4] = -0.000160694; parH[3][5] = 198795;
      parH[3][6] = -198762; parH[3][7] = 2.0461e-05; parH[3][8] = 198766;
      parH[4][0] = -2266.22; parH[4][1] = -0.000632337; parH[4][2] = 2294.37;
      parH[4][3] = -198728; parH[4][4] = -0.000223575; parH[4][5] = 198799;
      parH[4][6] = -198763; parH[4][7] = 3.39674e-05; parH[4][8] = 198765;
      parH[5][0] = -2266.3; parH[5][1] = -0.000349999; parH[5][2] = 2294;
      parH[5][3] = -198726; parH[5][4] = -0.00012299; parH[5][5] = 198802;
      parH[5][6] = -198762; parH[5][7] = 1.54008e-05; parH[5][8] = 198765;
      
      
      
      float phi_clas;
      int sector;
      
      if (Phi < -30){phi_clas = 360 + Phi;}
      else{phi_clas = Phi;}
      
      //get sectors
      if ( (phi_clas > -30) && (phi_clas <= 30 )){sector = 1;}
      else if ( (phi_clas > 30) && (phi_clas <= 90 )){sector = 2;}
      else if ( (phi_clas > 90) && (phi_clas <= 150 )){sector = 3;}
      else if ( (phi_clas > 150) && (phi_clas <= 210 )){sector = 4;}
      else if ( (phi_clas > 210) && (phi_clas <= 270 )){sector = 5;}
      else if ( (phi_clas > 270) && (phi_clas <= 330 )){sector = 6;}
      else{cout<<"UNDEFINED SECTOR "<<Phi<<endl; sector = 0;}
      //get phidiff
      float phidiff = (60.*(float)(sector - 1)) - phi_clas;
      
      float fidvar[2] = {Pmom,Theta};
      
      float lowReg = 0;
      lowReg = FidFunc_pos(fidvar,parL[sector - 1]);
      float highReg = 0;
      highReg = FidFunc_pos(fidvar,parH[sector - 1]);
      
      //Now its time to determine true false based on the input of tight, loose, nominal
      float pass_low, pass_high;
      
      if(type_of_cut=="tight"){
        pass_low = lowReg + 2;
        pass_high = highReg - 2;
        if ((phidiff > pass_low) && (phidiff < pass_high))
        {
          return true;
        }else{return false;}
      }
      else if(type_of_cut=="loose"){
        pass_low = lowReg - 2;
        pass_high = highReg + 2;
        if ((phidiff > pass_low) && (phidiff < pass_high))
        {
          return true;
        }else{return false;}
      }
      else if(type_of_cut=="nominal"){
        pass_low = lowReg;
        pass_high = highReg;
        if ((phidiff > pass_low) && (phidiff < pass_high))
        {
          return true;
        }else{return false;}
      }
      else{cout<<"Did not enter correct type of cut "<<endl;return false;}
    }
    bool g12_NegParticle_fiducial_cuts(float Pmom, float Theta, float Phi, const std::string& type_of_cut ){
      
      const int Ns = 6;  //number of sectors
      float parL[Ns][9];
      float parH[Ns][9];
      parL[0][0] = -15810.2; parL[0][1] = 9.9663e-05; parL[0][2] = 15783.2;
      parL[0][3] = -538215; parL[0][4] = 9.84788e-05; parL[0][5] = 538135;
      parL[0][6] = -678156; parL[0][7] = 1.42357e-05; parL[0][8] = 678167;
      parL[1][0] = -15810.7; parL[1][1] = 0.0001; parL[1][2] = 15783.7;
      parL[1][3] = -538209; parL[1][4] = 8.31014e-05; parL[1][5] = 538141;
      parL[1][6] = -678155; parL[1][7] = 1.32519e-05; parL[1][8] = 678167;
      parL[2][0] = -37808.6; parL[2][1] = 4.38676e-05; parL[2][2] = 37782.3;
      parL[2][3] = -678187; parL[2][4] = 3.0748e-05; parL[2][5] = 678136;
      parL[2][6] = -678155; parL[2][7] = 1.13289e-05; parL[2][8] = 678168;
      parL[3][0] = -37809.1; parL[3][1] = 5.52776e-05; parL[3][2] = 37781.8;
      parL[3][3] = -678197; parL[3][4] = 4.21772e-05; parL[3][5] = 678126;
      parL[3][6] = -678156; parL[3][7] = 9.59678e-06; parL[3][8] = 678167;
      parL[4][0] = -37809.2; parL[4][1] = 5.79073e-05; parL[4][2] = 37781.7;
      parL[4][3] = -678207; parL[4][4] = 7.72987e-05; parL[4][5] = 678115;
      parL[4][6] = -678156; parL[4][7] = 1.63781e-05; parL[4][8] = 678166;
      parL[5][0] = -37808.9; parL[5][1] = 4.70858e-05; parL[5][2] = 37781.9;
      parL[5][3] = -678198; parL[5][4] = 9.27108e-05; parL[5][5] = 678125;
      parL[5][6] = -678155; parL[5][7] = 1.63781e-05; parL[5][8] = 678167;
      
      parH[0][0] = -15783.8; parH[0][1] = -0.0001; parH[0][2] = 15809.5;
      parH[0][3] = -538148; parH[0][4] = -8.77852e-05; parH[0][5] = 538201;
      parH[0][6] = -678155; parH[0][7] = 1.67856e-05; parH[0][8] = 678168;
      parH[1][0] = -37782.2; parH[1][1] = -9.78359e-05; parH[1][2] = 37808.7;
      parH[1][3] = -678123; parH[1][4] = -9.99919e-05; parH[1][5] = 678199;
      parH[1][6] = -678155; parH[1][7] = 1.71348e-05; parH[1][8] = 678168;
      parH[2][0] = -37782.3; parH[2][1] = -6.62596e-05; parH[2][2] = 37808.6;
      parH[2][3] = -678133; parH[2][4] = -4.84207e-05; parH[2][5] = 678190;
      parH[2][6] = -678155; parH[2][7] = 1.47442e-05; parH[2][8] = 678168;
      parH[3][0] = -37782.5; parH[3][1] = -3.18908e-05; parH[3][2] = 37808.4;
      parH[3][3] = -678135; parH[3][4] = -1.21321e-05; parH[3][5] = 678188;
      parH[3][6] = -678155; parH[3][7] = 1.22068e-05; parH[3][8] = 678168;
      parH[4][0] = -37782.3; parH[4][1] = -6.28596e-05; parH[4][2] = 37808.5;
      parH[4][3] = -678136; parH[4][4] = -0.0001; parH[4][5] = 678187;
      parH[4][6] = -678154; parH[4][7] = 1.79547e-05; parH[4][8] = 678168;
      parH[5][0] = -37782.4; parH[5][1] = -6.08308e-05; parH[5][2] = 37808.4;
      parH[5][3] = -678131; parH[5][4] = -5.88378e-05; parH[5][5] = 678192;
      parH[5][6] = -678155; parH[5][7] = 1.44427e-05; parH[5][8] = 678168;
      
      
      float phi_clas;
      int sector;
      
      if (Phi < -30){phi_clas = 360 + Phi;}
      else{phi_clas = Phi;}
      
      //get sectors
      if ( (phi_clas > -30) && (phi_clas <= 30 )){sector = 1;}
      else if ( (phi_clas > 30) && (phi_clas <= 90 )){sector = 2;}
      else if ( (phi_clas > 90) && (phi_clas <= 150 )){sector = 3;}
      else if ( (phi_clas > 150) && (phi_clas <= 210 )){sector = 4;}
      else if ( (phi_clas > 210) && (phi_clas <= 270 )){sector = 5;}
      else if ( (phi_clas > 270) && (phi_clas <= 330 )){sector = 6;}
      else{cout<<"UNDEFINED SECTOR"<<endl; sector = 0;}
      //get phidiff
      float phidiff = (60.*(float)(sector - 1)) - phi_clas;
      
      float fidvar[2] = {Pmom,Theta};
      
      float lowReg = 0;
      lowReg = FidFunc_neg(fidvar,parL[sector - 1]);
      float highReg = 0;
      highReg = FidFunc_neg(fidvar,parH[sector - 1]);
      
      //Now its time to determine true false based on the input of tight, loose, nominal
      float pass_low, pass_high;
      
      if(type_of_cut=="tight"){
        pass_low = lowReg + 2;
        pass_high = highReg - 2;
        if ((phidiff > pass_low) && (phidiff < pass_high))
        {
          return true;
        }else{return false;}
      }
      else if(type_of_cut=="loose"){
        pass_low = lowReg - 2;
        pass_high = highReg + 2;
        if ((phidiff > pass_low) && (phidiff < pass_high))
        {
          return true;
        }else{return false;}
      }
      else if(type_of_cut=="nominal"){
        pass_low = lowReg;
        pass_high = highReg;
        if ((phidiff > pass_low) && (phidiff < pass_high))
        {
          return true;
        }else{return false;}
      }
      else{cout<<"Did not enter correct type of cut "<<endl;return false;}
    }
    //////////////////////////////////////////////////
    //c style 2d function
    float FidFunc_pos(float *x, float *par)
    {
      float xx = x[0]; //momentum
      float yy = x[1]; //theta
      float a = (par[0]*pow(xx,par[1]) + par[2]);
      float b = (par[3]*pow(xx,par[4]) + par[5]);
      float c = (par[6]*pow(xx,par[7]) + par[8]);
      float f =  a -  b/(yy - c);
      return 	f;
    }
    float FidFunc_neg(float *x, float *par)
    {
      float xx = x[0]; //momentum
      float yy = x[1]; //theta
      float a = (par[0]*pow(xx,par[1]) + par[2]);
      float b = (par[3]*pow(xx,par[4]) + par[5]);
      float c = (par[6]*pow(xx,par[7]) + par[8]);
      float f =  a -  b/(yy - c);
      return 	f;
    }
    
    //#####################################################################################
    //########################## Beam Trips ############################
    
    typedef struct {
      //unsigned long first_event;
      //unsigned long last_event;
      int first_event;
      int last_event;
    } trip_interval_t;
    
    bool is_good(const int& nrun, const int& nevent)//
    {
      TString tripdir = correction_dir + "/TRIPFILES";
      static std::map<unsigned long, std::vector<trip_interval_t> > tripmap;
      
      if (!tripmap.count(nrun))
      {
        //std::clog << "reading in trip information for run: " << nrun << std::endl;
        
        std::stringstream tripfile;
        tripfile << tripdir << "/clas_0" << nrun << ".trip";
        std::ifstream ifs(tripfile.str().c_str());
        std::string inputline;
        unsigned long data[11];
        double livetime;
        std::vector<trip_interval_t> trips;
        trip_interval_t intvl;
        bool inside_trip = false;
        while (!ifs.eof() && getline(ifs, inputline) && inputline != "")
        {
          std::stringstream ss;
          ss.str(inputline);
          for (int i=0; i<11; i++)
          {
            ss >> data[i];
          }
          ss >> livetime;
          
          if (data[2] != 0)
          {
            if (inside_trip)
            {
              intvl.last_event = data[4];
            }
            else
            {
              inside_trip = true;
              intvl.first_event = data[3];
              intvl.last_event = data[4];
            }
          }
          else
          {
            if (inside_trip)
            {
              //std::clog << "    " << intvl.first_event << " - " << intvl.last_event << std::endl;
              trips.push_back(intvl);
              inside_trip = false;
            }
          }
        }
        if (inside_trip)
        {
          intvl.last_event = std::numeric_limits<unsigned long>::max();
          trips.push_back(intvl);
          inside_trip = false;
        }
        tripmap.insert(make_pair(nrun,trips));
      }
      
      
      std::vector<trip_interval_t>::const_iterator itr;
      for (itr = tripmap[nrun].begin(); itr != tripmap[nrun].end(); ++itr)
      {
        if (itr->first_event <= nevent && nevent <= itr->last_event)
        {
          return false;
        }
      }
      
      return true;
    }
    
  } /* namespace clas::g12 */
} /* namespace clas */






#endif /* __CLAS_G12_COR_HPP__ */
