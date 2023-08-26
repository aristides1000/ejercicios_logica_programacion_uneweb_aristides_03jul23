function bonAppetit(bill, k, b) {
  // Write your code here
  let first_total_bill = 0;
  for (let i = 0; i < bill.length ; i++) {
      first_total_bill += bill[i];
  }
  let final_total_bill = first_total_bill - bill[k];
  let division_bill = final_total_bill / 2;
  
  let charged_money_anna = b - division_bill;
  
  if (charged_money_anna == 0) {
      console.log('Bon Appetit');
  } else {
      console.log(charged_money_anna);
  }
}