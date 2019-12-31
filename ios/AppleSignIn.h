#import <React/RCTBridgeModule.h>

@import AuthenticationServices;

API_AVAILABLE(ios(13.0))
@interface AppleSignIn : NSObject <RCTBridgeModule , ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

// TODO use promise wrapper like in google sign in
@property (nonatomic, strong) RCTPromiseResolveBlock promiseResolve;
@property (nonatomic, strong) RCTPromiseRejectBlock promiseReject;


@end
