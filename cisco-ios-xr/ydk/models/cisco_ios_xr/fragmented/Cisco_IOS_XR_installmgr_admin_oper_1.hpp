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


class Install::Logs::Log::Communication::LogContents::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf category; //type: InstmgrBagLogEntryUserMsgCategory
        ydk::YLeaf message; //type: string
        class Scope; //type: Install::Logs::Log::Communication::LogContents::V3::Scope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents::V3::Scope> scope;
        
}; // Install::Logs::Log::Communication::LogContents::V3


class Install::Logs::Log::Communication::LogContents::V3::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_read; //type: boolean
        ydk::YLeaf affected_sd_rs; //type: uint32

}; // Install::Logs::Log::Communication::LogContents::V3::Scope


}
}

#endif /* _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_1_ */

