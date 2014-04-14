//
//  ViewController.h
//  BullsEye
//
//  Created by Stephen on 13/04/2014.
//  Copyright (c) 2014 Vantech. All rights reserved.
//

@interface ViewController : UIViewController <UIAlertViewDelegate>

@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UILabel *targetLabel;
@property (nonatomic, weak) IBOutlet UILabel *scoreLabel;
@property (nonatomic, weak) IBOutlet UILabel *roundLabel;

-(IBAction)showAlert;
-(IBAction)sliderMoved:(UISlider *)slider;
-(IBAction)startOver;

@end
