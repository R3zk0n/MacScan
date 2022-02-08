// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETHTTPURLCONNECTION_H
#define JAVANETHTTPURLCONNECTION_H


#import <Foundation/Foundation.h>

#import "JavaNetURLConnection.h"

@interface JavaNetHttpURLConnection : JavaNetURLConnection {
    NSString *method_;
    int responseCode_;
    NSString *responseMessage_;
    BOOL instanceFollowRedirects_;
    int chunkLength_;
    int fixedContentLength_;
    NSInteger fixedContentLengthLong_;
}




-(id)initWithJavaNetURL:(id)arg0 ;
-(void)disconnect;
-(id)getErrorStream;
-(id)getPermission;
-(id)getRequestMethod;
-(int)getResponseCode;
-(id)getResponseMessage;
-(void)setRequestMethodWithNSString:(id)arg0 ;
-(BOOL)usingProxy;
-(id)getContentEncoding;
-(BOOL)getInstanceFollowRedirects;
-(void)setInstanceFollowRedirectsWithBoolean:(BOOL)arg0 ;
-(NSInteger)getHeaderFieldDateWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)setFixedLengthStreamingModeWithLong:(NSInteger)arg0 ;
-(void)setFixedLengthStreamingModeWithInt:(int)arg0 ;
-(void)setChunkedStreamingModeWithInt:(int)arg0 ;
-(void)dealloc;
+(BOOL)getFollowRedirects;
+(void)setFollowRedirectsWithBoolean:(BOOL)arg0 ;
+(void)initialize;
+(id)__annotations_HTTP_SERVER_ERROR_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif