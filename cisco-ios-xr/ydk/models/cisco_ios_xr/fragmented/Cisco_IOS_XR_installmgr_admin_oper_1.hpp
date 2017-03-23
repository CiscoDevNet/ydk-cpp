#ifndef _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_1_
#define _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_installmgr_admin_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_installmgr_admin_oper {


class Install::Logs::Log::Communication::LogContents::V3 : public Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf category; //type: InstmgrBagLogEntryUserMsgCategoryEnum
        YLeaf message; //type: string

        class Scope; //type: Install::Logs::Log::Communication::LogContents::V3::Scope

        std::shared_ptr<Cisco_IOS_XR_installmgr_admin_oper::Install::Logs::Log::Communication::LogContents::V3::Scope> scope;


}; // Install::Logs::Log::Communication::LogContents::V3


class Install::Logs::Log::Communication::LogContents::V3::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf admin_read; //type: boolean
        YLeaf affected_sd_rs; //type: uint32



}; // Install::Logs::Log::Communication::LogContents::V3::Scope


}
}

#endif /* _CISCO_IOS_XR_INSTALLMGR_ADMIN_OPER_1_ */

