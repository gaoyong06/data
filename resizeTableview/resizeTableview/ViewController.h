//
//  ViewController.h
//  resizeTableview
//
//  Created by gao yong on 12-6-13.
//  Copyright (c) 2012年 Beijing 8DDY Technology Services Co., LTD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate,UITableViewDataSource>
{
	
	UITableView *uiTableView;

}

@property(nonatomic,retain) IBOutlet UITableView *uiTableView;

@end
