// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGXMLSAXINPUTSOURCE_H
#define ORGXMLSAXINPUTSOURCE_H


#import <Foundation/Foundation.h>

#import "JavaIoInputStream.h"
#import "JavaIoReader.h"

@interface OrgXmlSaxInputSource : NSObject {
    NSString *publicId_;
    NSString *systemId_;
    JavaIoInputStream *byteStream_;
    NSString *encoding_;
    JavaIoReader *characterStream_;
}




-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaIoInputStream:(id)arg0 ;
-(id)initWithJavaIoReader:(id)arg0 ;
-(void)setPublicIdWithNSString:(id)arg0 ;
-(id)getPublicId;
-(void)setSystemIdWithNSString:(id)arg0 ;
-(id)getSystemId;
-(void)setByteStreamWithJavaIoInputStream:(id)arg0 ;
-(id)getByteStream;
-(void)setEncodingWithNSString:(id)arg0 ;
-(id)getEncoding;
-(void)setCharacterStreamWithJavaIoReader:(id)arg0 ;
-(id)getCharacterStream;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif