//
//  ViewController.h
//  BullsEye
//
//  Created by Stephen on 13/04/2014.
//  Copyright (c) 2014 Vantech. All rights reserved.
//

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UISlider *slider;

-(IBAction)showAlert;
-(IBAction)sliderMoved:(UISlider *)slider;

@end
