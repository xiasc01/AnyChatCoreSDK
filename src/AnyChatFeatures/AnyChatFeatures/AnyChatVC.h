//
//  VideoVC.h
//  AnyChatFeatures
//  Copyright (c) 2014年 GuangZhou BaiRui NetWork Technology Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "MBProgressHUD.h"
#import "VideoVC.h"
#import "SettingVC.h"
#import "UserListVC.h"
#import "FeaturesListVC.h"
#import "TextMsg_TransBufferVC.h"

#import "RecordLocalVC.h"

#import "AnyChatPlatform.h"
#import "AnyChatDefine.h"
#import "AnyChatErrorCode.h"

#define kAnyChatIP @"demo.anychat.cn"
#define kAnyChatPort @"8906"

typedef enum {
    AnyChatVCLoginModeGeneralLogin,
    AnyChatVCLoginModeSignLogin
} AnyChatVCLoginMode;

@class VideoVC;

@interface AnyChatVC : UIViewController <NSCoding,UITextFieldDelegate,UIAlertViewDelegate,MBProgressHUDDelegate,AnyChatNotifyMessageDelegate,AnyChatTextMsgDelegate,AnyChatTransDataDelegate,AnyChatRecordSnapShotDelegate,AnyChatVideoCallDelegate,AnyChatMediaDataDelegate>
{
    MBProgressHUD   *HUD;
    
}

@property (weak, nonatomic) IBOutlet UITextField            *theUserName;
@property (weak, nonatomic) IBOutlet UITextField            *theServerIP;
@property (weak, nonatomic) IBOutlet UITextField            *theServerPort;
@property (weak, nonatomic) IBOutlet UIButton               *theLoginBtn;
@property (weak, nonatomic) IBOutlet UIButton               *theHideKeyboardBtn;
@property (weak, nonatomic) IBOutlet UILabel                *theVersionLab;
@property (weak, nonatomic) IBOutlet UILabel                *theStateInfo;
@property (strong, nonatomic) UIAlertView                   *theVideoRecordAlertView;
@property (strong, nonatomic) UIAlertView                   *theSnapShotAlertView;
@property (strong, nonatomic) NSMutableArray                *onlineUserMArray;
@property (strong, nonatomic) NSMutableArray                *theVideoRecordMArray;
@property (strong, nonatomic) NSMutableArray                *theVideoRecordSelfMArray;
@property (strong, nonatomic) NSString                      *theFeaturesName;
@property (strong, nonatomic) NSString                      *theMyUserName;
@property (strong, nonatomic) NSString                      *theTargetUserName;
@property (strong, nonatomic) NSString                      *theUDPTraceType;
@property (strong, nonatomic) VideoVC                       *videoVC;
@property (strong, nonatomic) AnyChatPlatform               *anyChat;
@property int   theFeaturesNO;
@property int   theMyUserID;
@property int   theTargetUserID;
@property int   theShowVCType;
@property BOOL  theOnLineLoginState;
@property (nonatomic, assign) AnyChatVCLoginMode loginMode; // 登录方式

kGCD_SINGLETON_FOR_HEADER(AnyChatVC);

- (IBAction) hideKeyBoard;

- (IBAction) OnLoginBtnClicked:(id)sender;

- (void) OnLogout;

- (void) saveSettings;

- (void) dimissAlertView:(UIAlertView *)alert;

- (NSString *)showInfoAlertView:(NSString *)Title : (NSString *)subTitle;

- (void)showSnapShotPhoto:(NSString *)theFilePath transform:(NSString *)transformParam;

- (NSMutableArray *) getOnlineUserArray;

@end
