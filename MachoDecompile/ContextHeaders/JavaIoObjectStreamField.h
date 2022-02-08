// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOOBJECTSTREAMFIELD_H
#define JAVAIOOBJECTSTREAMFIELD_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface JavaIoObjectStreamField : NSObject <JavaLangComparable>

 {
    int offset_;
    NSString *name_;
    id *type_;
    NSString *typeString_;
    BOOL unshared_;
    BOOL isDeserialized_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withIOSClass:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withIOSClass:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(int)compareToWithId:(id)arg0 ;
-(id)getName;
-(int)getOffset;
-(id)getTypeInternal;
-(id)getType;
-(unsigned short)getTypeCode;
-(unsigned short)typeCodeOfWithIOSClass:(id)arg0 ;
-(id)getTypeString;
-(BOOL)isPrimitive;
-(BOOL)writeFieldWithJavaIoDataOutputStream:(id)arg0 ;
-(void)setOffsetWithInt:(int)arg0 ;
-(void)resolveWithJavaLangClassLoader:(id)arg0 ;
-(BOOL)isUnshared;
-(void)setUnsharedWithBoolean:(BOOL)arg0 ;
-(BOOL)defaultResolve;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif