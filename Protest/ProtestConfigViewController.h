//
//  ProtestConfigurationViewController.h
//  Protest
//
//  Created by John Rogers on 7/4/14.
//  Copyright (c) 2014 John Rogers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ConnectionManager.h"

@interface ProtestConfigViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *protestNameField;
@property (weak, nonatomic) IBOutlet UIButton *startButton;

- (void)reset;

@end
