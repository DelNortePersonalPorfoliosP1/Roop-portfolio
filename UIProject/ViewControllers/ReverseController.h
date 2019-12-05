//
//  ReverseController.h
//  UIProject
//
//  Created by Vij, Jagroop on 12/2/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "control.h"

@interface ReverseController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *Input;
@property (weak, nonatomic) IBOutlet UITextField *Output;

// revx4 prototypes
char *revXArray(char* input, long length);
char *revXRecurse(char* input, long length);
char *revXPointer(char* input, long length);
char *paliEval(char* input, long length);


@end
