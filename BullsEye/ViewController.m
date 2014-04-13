//
//  ViewController.m
//  BullsEye
//
//  Created by Stephen on 13/04/2014.
//  Copyright (c) 2014 Vantech. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction) showAlert {
	UIAlertView *alertView;
	alertView = [[UIAlertView alloc]
				initWithTitle:@"Hello World"
				message:@"This is my first app!"
				delegate:nil cancelButtonTitle:@"Awesome"
	            otherButtonTitles:nil];
	[alertView show];
}


@end
