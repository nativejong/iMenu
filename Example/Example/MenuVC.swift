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
    var homeBtn : UIButton?

    override func viewDidLoad() {
        super.viewDidLoad()
        self.edgesForExtendedLayout = []
        
        menu = iMenu(frame: CGRect.zero, background: UIColor.red)
        self.view.layer.backgroundColor = UIColor.white.cgColor
        self.view.addSubview(menu!)
        
        self.addBarButton()
    }
    
    func addBarButton(){
        homeBtn = UIButton(type: UIButton.ButtonType.custom)
        homeBtn?.setTitle("◀︎", for: UIControl.State.normal)
        homeBtn?.addTarget(self, action: #selector(action), for: UIControl.Event.touchUpInside)
        homeBtn?.frame = CGRect(x: 0, y: 0, width: 30, height: 30)

        homeBtn?.isHidden = true
        
        let homeButton = UIBarButtonItem(customView: homeBtn!)
        self.navigationItem.setLeftBarButtonItems([homeButton], animated: true)
    }
    
    @objc func action(){
         print("clicked")
        menu?.prev()
    }
    
    func resizeImage(s: String) -> UIImage {
        let image = UIImage(named: s)
        let newSize: CGSize = CGSize(width: 20,  height: 20 )
        let rect = CGRect(x: 0, y: 0, width: newSize.width, height: newSize.height)

        UIGraphicsBeginImageContextWithOptions(newSize, false, 1.0)
        image!.draw(in: rect)
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()

        return newImage!
    }

    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        menu?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
    }

    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        self.watchMenu()
    }
    
    
    func watchMenu() {
        self.menu?.watch(true, city: { (a : [AnyHashable : Any]) in
            self.homeBtn?.isHidden = false

        }, shop: { (b : [AnyHashable : Any]) in
            self.homeBtn?.isHidden = false

        }, menu: { ( c : [AnyHashable : Any]) in
            self.homeBtn?.isHidden = false

        })
    }
    

}
