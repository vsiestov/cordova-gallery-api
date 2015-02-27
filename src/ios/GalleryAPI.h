#import <AssetsLibrary/AssetsLibrary.h>
#import <AssetsLibrary/ALAssetsGroup.h>
#import <Cordova/CDVPlugin.h>

@interface GalleryAPI : NSObject

- (void) getAlbums:(CDVInvokedUrlCommand*)command;

- (void) getAlbumAssets:(NSString*) album withSuccessHandler:(void (^) (NSArray *))successHandler andErrorHandler:(void (^) (NSString *))errorHandler;

@end
