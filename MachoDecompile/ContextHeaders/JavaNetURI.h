// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETURI_H
#define JAVANETURI_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaNetURI : NSObject <JavaLangComparable, JavaIoSerializable>

 {
    NSString *string_;
    NSString *scheme_;
    NSString *schemeSpecificPart_;
    NSString *authority_;
    NSString *userInfo_;
    NSString *host_;
    int port_;
    NSString *path_;
    NSString *query_;
    NSString *fragment_;
    BOOL opaque_;
    BOOL absolute_;
    BOOL serverAuthority_;
    int hash__;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)parseURIWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)validateSchemeWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)parseAuthorityWithBoolean:(BOOL)arg0 ;
-(void)validateUserInfoWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
-(BOOL)isValidHostWithBoolean:(BOOL)arg0 withNSString:(id)arg1 ;
-(BOOL)isValidDomainNameWithNSString:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(id)duplicate;
-(id)convertHexToLowerCaseWithNSString:(id)arg0 ;
-(BOOL)escapedEqualsWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)getScheme;
-(id)getSchemeSpecificPart;
-(id)getRawSchemeSpecificPart;
-(id)getAuthority;
-(id)getRawAuthority;
-(id)getUserInfo;
-(id)getRawUserInfo;
-(id)getHost;
-(int)getPort;
-(int)getEffectivePort;
-(id)getPath;
-(id)getRawPath;
-(id)getQuery;
-(id)getRawQuery;
-(id)getFragment;
-(id)getRawFragment;
-(BOOL)isAbsolute;
-(BOOL)isOpaque;
-(id)normalizeWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)normalize;
-(id)parseServerAuthority;
-(id)relativizeWithJavaNetURI:(id)arg0 ;
-(id)resolveWithJavaNetURI:(id)arg0 ;
-(void)setSchemeSpecificPart;
-(id)resolveWithNSString:(id)arg0 ;
-(id)decodeWithNSString:(id)arg0 ;
-(id)toASCIIString;
-(id)getHashString;
-(id)toURL;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)dealloc;
+(id)createWithNSString:(id)arg0 ;
+(int)getEffectivePortWithNSString:(id)arg0 withInt:(int)arg1 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif