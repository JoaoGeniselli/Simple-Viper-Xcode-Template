//___FILEHEADER___

#import <Foundation/Foundation.h>

// ___VARIABLE_productName___.h

@protocol ___VARIABLE_productName___View;
@protocol ___VARIABLE_productName___Presenter;
@protocol ___VARIABLE_productName___Interactor;
@protocol ___VARIABLE_productName___InteractorOutput;
@protocol ___VARIABLE_productName___Router;

@protocol ___VARIABLE_productName___View <NSObject>

@property (nonatomic) id<___VARIABLE_productName___Presenter> presenter;

@end

@protocol ___VARIABLE_productName___Presenter <NSObject>

@property (nonatomic) id<___VARIABLE_productName___View> view;

-(void)start;

@end

@protocol ___VARIABLE_productName___Interactor <NSObject>

@property (nonatomic) id<___VARIABLE_productName___InteractorOutput> output;

@end

@protocol ___VARIABLE_productName___InteractorOutput <NSObject>

@end

@protocol ___VARIABLE_productName___Router <NSObject>

@end
