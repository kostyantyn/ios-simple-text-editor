//
//  STEDetailViewController.h
//  SimpleTextEditor
//
//  Created by Kostyantyn on 1/27/13.
//  Copyright (c) 2013 Kostyantyn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STEDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
