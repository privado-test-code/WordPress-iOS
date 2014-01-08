//
//  CategoriesViewController.h
//  WordPress
//
//  Created by Eric Johnson on 1/8/14.
//  Copyright (c) 2014 WordPress. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Post.h"

typedef enum {
    CategoriesSelectionModePost = 0,
    CategoriesSelectionModeParent
} CategoriesSelectionMode;

@interface CategoriesViewController : UITableViewController

@property (nonatomic, assign) BOOL allowsMultipleSelection;

- (id)initWithPost:(Post *)post selectionMode:(CategoriesSelectionMode)selectionMode;
- (BOOL)hasChanges;

@end
