
#import "../Navigation/NavigatedViewController.h"
#import "../Util/UIDictionaryTableViewCell.h"
#import "../UIFileBrowserViewController/UIFileBrowserViewController.h"

@interface ProjectSettingsViewController : NavigatedViewController <UITableViewDelegate, UITableViewDataSource, UIDictionaryTableViewCellDelegate, UIFileBrowserDelegate>
{
	UITableView* settingsTable;
	
	NSString* name;
	NSString* author;
	NSString* bundleID;
	NSString* execName;
	NSString* prodName;
	NSString* sdk;
	
	@private
	UIFileBrowserViewController* fileExplorer;
}

- (void)applyButtonSelected;
- (void)cancelButtonSelected;
- (void)onSDKInfoButtonSelected;
- (void)cancelFileExplorer;

- (void)keyboardDidHide:(NSNotification*)notification;
- (void)keyboardDidShow:(NSNotification*)notification;

@property (nonatomic, readonly) UITableView* settingsTable;
@property (nonatomic, retain) NSString* name;
@property (nonatomic, retain) NSString* author;
@property (nonatomic, retain) NSString* bundleID;
@property (nonatomic, retain) NSString* execName;
@property (nonatomic, retain) NSString* prodName;
@property (nonatomic, retain) NSString* sdk;
@end

@interface ProjectSettingsStringViewController : NavigatedViewController <UITextFieldDelegate>
{
	UITextField* stringBox;
	NSIndexPath* indexPath;
	ProjectSettingsViewController* settingsController;
}

- (id)initWithIndexPath:(NSIndexPath*)indexPath string:(NSString*)string settingsController:(ProjectSettingsViewController*)settingsController;

@property (nonatomic, retain) UITextField* stringBox;
@property (nonatomic, readonly) NSIndexPath* indexPath;
@property (nonatomic, assign) ProjectSettingsViewController* settingsController;
@end