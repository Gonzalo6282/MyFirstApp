//
//  CCViewController.h
//  MyFirstApp
//
//  Created by Gabi on 10/11/2014.
//  Copyright (c) 2014 Liner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UITextField *textField;

- (IBAction)buttonPressed:(UIButton *)sender;

@end
