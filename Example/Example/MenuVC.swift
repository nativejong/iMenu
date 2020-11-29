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
        
        let c = UIColor(red: 120/255.0, green: 0/255.0, blue: 0/255.0, alpha: 1.0 )
        menu = iMenu(frame: CGRect.zero, background: c )
        self.view.layer.backgroundColor = c.cgColor
        self.view.addSubview(menu!)
        
        self.addBarButton()
    }
    
    func addBarButton(){
        homeBtn = UIButton(type: UIButton.ButtonType.custom)
        homeBtn?.setTitle("◀︎", for: UIControl.State.normal)
        homeBtn?.titleLabel?.font = UIFont.systemFont(ofSize: UIFont.systemFontSize * 1.1 )
        homeBtn?.addTarget(self, action: #selector(action), for: UIControl.Event.touchUpInside)
        homeBtn?.backgroundColor = UIColor.black
        homeBtn?.layer.cornerRadius = 5
        
        homeBtn?.isHidden = true
        
        let homeButton = UIBarButtonItem(customView: homeBtn!)
        self.navigationItem.setLeftBarButtonItems([homeButton], animated: true)
    }
    
    @objc func action(){
         print("clicked")
        if let rv = menu?.prev(){
            self.homeBtn?.isHidden = rv
        }
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
