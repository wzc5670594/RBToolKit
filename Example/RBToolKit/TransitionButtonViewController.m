//
//  TransitionButtonViewController.m
//  RBToolKit_Example
//
//  Created by Ray on 2018/5/25.
//  Copyright © 2018年 wzc5670594. All rights reserved.
//

#import "TransitionButtonViewController.h"

#import <RBToolKit/UIButton+TransitionButton.h>

@interface TransitionButtonViewController ()

/**  */
@property (nonatomic, weak)IBOutlet UIButton *button;

@end

@implementation TransitionButtonViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)transition:(UIButton *)sender {
    
    [sender start];
    
}


- (IBAction)stop:(id)sender {
    
    
    [self.button stop];
    
}

@end
