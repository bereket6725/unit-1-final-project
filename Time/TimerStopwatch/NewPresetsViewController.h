//
//  NewPresetsViewController.h
//  TimerStopwatch
//
//  Created by Charles Kang  on 8/26/15.
//  Copyright (c) 2015 Charles Kang . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewPresetsViewControllerDelegate.h"

@interface NewPresetsViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>
@property (nonatomic) id<NewPresetsViewControllerDelegate> delegate;
@end
