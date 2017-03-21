//
//  VideoVC.h
//  AnyChatMeetings
//
//  Created by alexChen .
//  Copyright (c) 2015年 GuangZhou BaiRui NetWork Technology Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "MBProgressHUD.h"
#import "VideoVC.h"
#import "SettingVC.h"

#import "AnyChatPlatform.h"
#import "AnyChatDefine.h"
#import "AnyChatErrorCode.h"


@class VideoVC;


@interface AnyChatVC : UIViewController <NSCoding,UITextFieldDelegate,UIAlertViewDelegate,MBProgressHUDDelegate,AnyChatNotifyMessageDelegate>
{
    MBProgressHUD   *HUD;

}

@property (strong, nonatomic) VideoVC                       *videoVC;
@property (strong, nonatomic) AnyChatPlatform               *anyChat;

@property (weak, nonatomic) IBOutlet UITextField            *theUserName;
@property (weak, nonatomic) IBOutlet UITextField            *theServerIP;
@property (weak, nonatomic) IBOutlet UITextField            *theServerPort;
@property (weak, nonatomic) IBOutlet UITextField            *theRoomNO;
@property (weak, nonatomic) IBOutlet UIButton               *theLoginBtn;
@property (weak, nonatomic) IBOutlet UIButton               *theHideKeyboardBtn;
@property (weak, nonatomic) IBOutlet UILabel                *theVersionLab;
@property (weak, nonatomic) IBOutlet UILabel                *theStateInfo;
@property (strong, nonatomic) NSMutableArray                *onlineUserMArray;
@property (strong, nonatomic) NSMutableArray                *theOnChatUserIDStrMArray;
@property (strong, nonatomic) NSString                      *theMyUserName;

@property int   theMyUserID;
@property BOOL  theOnLineLoginState;

kGCD_SINGLETON_FOR_HEADER(AnyChatVC);

- (IBAction) hideKeyBoard;
- (IBAction) OnLoginBtnClicked:(id)sender;
- (void) OnLogout;
- (void) saveSettings;
- (void) dimissAlertView:(UIAlertView *)alert;
- (NSString *)showInfoAlertView:(NSString *)Title : (NSString *)subTitle;
- (NSMutableArray *) getOnlineUserArray;

@end
