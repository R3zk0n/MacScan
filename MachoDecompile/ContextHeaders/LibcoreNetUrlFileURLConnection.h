// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCORENETURLFILEURLCONNECTION_H
#define LIBCORENETURLFILEURLCONNECTION_H


#import <Foundation/Foundation.h>

#import "JavaNetURLConnection.h"
#import "JavaIoInputStream.h"
#import "JavaIoFilePermission.h"

@interface LibcoreNetUrlFileURLConnection : JavaNetURLConnection {
    NSString *filename_;
    JavaIoInputStream *is_;
    NSInteger length_;
    BOOL isDir_;
    JavaIoFilePermission *permission_;
}




-(id)initWithJavaNetURL:(id)arg0 ;
-(void)connect;
-(int)getContentLength;
-(NSInteger)getContentLengthLong;
-(id)getContentType;
-(id)getDirectoryListingWithJavaIoFile:(id)arg0 ;
-(id)getInputStream;
-(id)getPermission;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif