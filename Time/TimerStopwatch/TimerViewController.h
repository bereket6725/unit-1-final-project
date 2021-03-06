//
//  TimerViewController.h
//  TimerStopwatch
//
//  Created by Charles Kang  on 8/22/15.
//  Copyright (c) 2015 Charles Kang . All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "PresetsTableViewControllerDelegate.h"



@interface TimerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, PresetsTableViewControllerDelegate>

@property (nonatomic) NSTimer *timer;
@property (strong, nonatomic) IBOutlet UILabel *timerLabel;

@property (strong, nonatomic) IBOutlet UIButton *startButton;
@property (strong, nonatomic) IBOutlet UIButton *pauseButton;
@property (strong, nonatomic) IBOutlet UIButton *resetButton;

@property (strong, nonatomic) IBOutlet UIDatePicker *countDownTimer;

@property (nonatomic) NSTimeInterval totalTime;
@property (nonatomic) NSInteger *secondsLeft;

@end

