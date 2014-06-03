//
//  ViewController.h
//  MCTest
//
//  Created by John Rogers on 4/5/14.
//  Copyright (c) 2014 John Rogers. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AppDelegate;

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate> {
    NSMutableArray *tableSource;
}

@property (nonatomic, strong) NSMutableArray *protests;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) UIButton *startProtestButton;

- (void)addProtestToList:(NSString*)nameOfProtest password:(BOOL)password health:(int)health;

@end
