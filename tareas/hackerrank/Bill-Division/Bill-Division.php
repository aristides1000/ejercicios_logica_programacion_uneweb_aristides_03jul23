<?php
function bonAppetit($bill, $k, $b) {
  // Write your code here
  $first_total_bill = 0;
  for ($i = 0; $i < count($bill); $i++) {
    $first_total_bill += $bill[$i];
  }
  $final_total_bill = $first_total_bill - $bill[$k];
  $division_bill = $final_total_bill / 2;

  $charged_money_anna = $b - $division_bill;

  if ($charged_money_anna == 0) {
    echo 'Bon Appetit';
  } else {
    echo $charged_money_anna;
  }
}
