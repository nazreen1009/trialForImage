//
//  ViewController.h
//  trialForImage
//
//  Created by IMRAN ISMAIL on 7/09/15.
//  Copyright (c) 2015 Nazreen. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController
{
    NSArray *arrayImg;
    int index;
    BOOL flag;
   
    __weak IBOutlet UIButton *button1;
}


@property (weak, nonatomic) IBOutlet UIImageView *showImage;


- (IBAction)buttonPressed:(id)sender;

@end

