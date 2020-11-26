//
//  MenuVC.swift
//  Example
//
//  Created by John Blaine on 11/26/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import iMenu

class MenuVC: UIViewController {
    var menu : iMenu?

    override func viewDidLoad() {
        super.viewDidLoad()
        self.edgesForExtendedLayout = []
        menu = iMenu(frame: CGRect.zero, background: UIColor.red)
        self.view.addSubview(menu!)
    }
    

    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        menu?.frame = CGRect(x: w * 0.0, y: h * 0.05, width: w * 1.0, height: h * 0.95)
    }

    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        self.watchMenu()
    }
    
    
    func watchMenu() {
        self.menu?.watch(true, city: { (a : [AnyHashable : Any]) in
            
        }, shop: { (b : [AnyHashable : Any]) in
            
        }, menu: { ( c : [AnyHashable : Any]) in
            
        })
    }
    

}
