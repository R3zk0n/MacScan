// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILATTRIBUTEFACTORY_STATICIMPLEMENTATIONATTRIBUTEFACTORY_H
#define ORGAPACHELUCENEUTILATTRIBUTEFACTORY_STATICIMPLEMENTATIONATTRIBUTEFACTORY_H



#import "OrgApacheLuceneUtilAttributeFactory.h"
#import "IOSClass.h"

@interface OrgApacheLuceneUtilAttributeFactory_StaticImplementationAttributeFactory : OrgApacheLuceneUtilAttributeFactory {
    OrgApacheLuceneUtilAttributeFactory *delegate_;
    IOSClass *clazz_;
}




-(id)initWithOrgApacheLuceneUtilAttributeFactory:(id)arg0 withIOSClass:(id)arg1 ;
-(id)createAttributeInstanceWithIOSClass:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif