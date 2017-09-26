#ifndef _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_1_
#define _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_installmgr_admin_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_installmgr_admin_oper {


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath : public ydk::Entity
{
    public:
        LoadPath();
        ~LoadPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf build_information; //type: string
        class Package; //type: Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package> package;
        
}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath


class Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device_name; //type: string
        ydk::YLeaf name; //type: string

}; // Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package


}
}

#endif /* _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_1_ */

