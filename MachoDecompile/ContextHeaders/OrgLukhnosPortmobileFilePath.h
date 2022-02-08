// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGLUKHNOSPORTMOBILEFILEPATH_H
#define ORGLUKHNOSPORTMOBILEFILEPATH_H


#import <Foundation/Foundation.h>

#import "JavaIoFile.h"

@interface OrgLukhnosPortmobileFilePath : NSObject {
    JavaIoFile *file_;
}




-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaIoFile:(id)arg0 ;
-(id)toFile;
-(id)toRealPath;
-(id)getFileName;
-(id)description;
-(id)resolveWithNSString:(id)arg0 ;
-(BOOL)isAbsolute;
-(id)toAbsolutePath;
-(id)getParent;
-(void)dealloc;


@end


#endif