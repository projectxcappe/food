//
//  FoodViewController.h
//  Food
//
//  Created by Samuel Goodwin on 10/21/08.
//  Copyright Goodwinlabs 2008. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FoodViewController : UIViewController {
	IBOutlet UITextField *subTotal;
	NSMutableArray *basket;
	UITableView *theTableView;
	UITextField *subTotalBox;
}

- (IBAction)addItem:(id)sender;
- (IBAction)checkout:(id)sender;
- (void)addToBasket:(NSDictionary *)itemToAdd;
- (void)subtotal;
@property(nonatomic, retain) UITextField *subTotal;
@property(nonatomic, retain) NSMutableArray *basket;
@property(nonatomic, retain) IBOutlet UITableView *theTableView;
@property(nonatomic, retain) IBOutlet UITextField *subTotalBox;
@end