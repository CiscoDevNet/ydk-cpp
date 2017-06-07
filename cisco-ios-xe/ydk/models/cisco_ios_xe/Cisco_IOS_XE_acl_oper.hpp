#ifndef _CISCO_IOS_XE_ACL_OPER_
#define _CISCO_IOS_XE_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_acl_oper {

class AccessLists : public Entity
{
    public:
        AccessLists();
        ~AccessLists();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class AccessList; //type: AccessLists::AccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_acl_oper::AccessLists::AccessList> > access_list;
        
}; // AccessLists


class AccessLists::AccessList : public Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_control_list_name; //type: string
        class AccessListEntries; //type: AccessLists::AccessList::AccessListEntries

        std::shared_ptr<Cisco_IOS_XE_acl_oper::AccessLists::AccessList::AccessListEntries> access_list_entries;
        
}; // AccessLists::AccessList


class AccessLists::AccessList::AccessListEntries : public Entity
{
    public:
        AccessListEntries();
        ~AccessListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessListEntry; //type: AccessLists::AccessList::AccessListEntries::AccessListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XE_acl_oper::AccessLists::AccessList::AccessListEntries::AccessListEntry> > access_list_entry;
        
}; // AccessLists::AccessList::AccessListEntries


class AccessLists::AccessList::AccessListEntries::AccessListEntry : public Entity
{
    public:
        AccessListEntry();
        ~AccessListEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rule_name; //type: uint32
        class AccessListEntriesOperData; //type: AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData

        std::shared_ptr<Cisco_IOS_XE_acl_oper::AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData> access_list_entries_oper_data;
        
}; // AccessLists::AccessList::AccessListEntries::AccessListEntry


class AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData : public Entity
{
    public:
        AccessListEntriesOperData();
        ~AccessListEntriesOperData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf match_counter; //type: uint64

}; // AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData


}
}

#endif /* _CISCO_IOS_XE_ACL_OPER_ */

