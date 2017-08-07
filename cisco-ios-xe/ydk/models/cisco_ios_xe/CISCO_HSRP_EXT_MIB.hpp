#ifndef _CISCO_HSRP_EXT_MIB_
#define _CISCO_HSRP_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_HSRP_EXT_MIB {

class CiscoHsrpExtMib : public ydk::Entity
{
    public:
        CiscoHsrpExtMib();
        ~CiscoHsrpExtMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Chsrpextiftrackedtable; //type: CiscoHsrpExtMib::Chsrpextiftrackedtable
        class Chsrpextsecaddrtable; //type: CiscoHsrpExtMib::Chsrpextsecaddrtable
        class Chsrpextifstandbytable; //type: CiscoHsrpExtMib::Chsrpextifstandbytable
        class Chsrpextiftable; //type: CiscoHsrpExtMib::Chsrpextiftable

        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextifstandbytable> chsrpextifstandbytable;
        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftable> chsrpextiftable;
        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftrackedtable> chsrpextiftrackedtable;
        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextsecaddrtable> chsrpextsecaddrtable;
        
}; // CiscoHsrpExtMib


class CiscoHsrpExtMib::Chsrpextiftrackedtable : public ydk::Entity
{
    public:
        Chsrpextiftrackedtable();
        ~Chsrpextiftrackedtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Chsrpextiftrackedentry; //type: CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry> > chsrpextiftrackedentry;
        
}; // CiscoHsrpExtMib::Chsrpextiftrackedtable


class CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry : public ydk::Entity
{
    public:
        Chsrpextiftrackedentry();
        ~Chsrpextiftrackedentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: uint32 (refers to CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextiftracked; //type: int32
        ydk::YLeaf chsrpextiftrackedpriority; //type: uint32
        ydk::YLeaf chsrpextiftrackedrowstatus; //type: Rowstatus
        ydk::YLeaf chsrpextiftrackedipnone; //type: boolean

}; // CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry


class CiscoHsrpExtMib::Chsrpextsecaddrtable : public ydk::Entity
{
    public:
        Chsrpextsecaddrtable();
        ~Chsrpextsecaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Chsrpextsecaddrentry; //type: CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry> > chsrpextsecaddrentry;
        
}; // CiscoHsrpExtMib::Chsrpextsecaddrtable


class CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry : public ydk::Entity
{
    public:
        Chsrpextsecaddrentry();
        ~Chsrpextsecaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: uint32 (refers to CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextsecaddraddress; //type: string
        ydk::YLeaf chsrpextsecaddrrowstatus; //type: Rowstatus

}; // CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry


class CiscoHsrpExtMib::Chsrpextifstandbytable : public ydk::Entity
{
    public:
        Chsrpextifstandbytable();
        ~Chsrpextifstandbytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Chsrpextifstandbyentry; //type: CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry> > chsrpextifstandbyentry;
        
}; // CiscoHsrpExtMib::Chsrpextifstandbytable


class CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry : public ydk::Entity
{
    public:
        Chsrpextifstandbyentry();
        ~Chsrpextifstandbyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: uint32 (refers to CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextifstandbyindex; //type: uint32
        ydk::YLeaf chsrpextifstandbydestaddrtype; //type: Inetaddresstype
        ydk::YLeaf chsrpextifstandbydestaddr; //type: binary
        ydk::YLeaf chsrpextifstandbysourceaddrtype; //type: Inetaddresstype
        ydk::YLeaf chsrpextifstandbysourceaddr; //type: binary
        ydk::YLeaf chsrpextifstandbyrowstatus; //type: Rowstatus

}; // CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry


class CiscoHsrpExtMib::Chsrpextiftable : public ydk::Entity
{
    public:
        Chsrpextiftable();
        ~Chsrpextiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Chsrpextifentry; //type: CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry> > chsrpextifentry;
        
}; // CiscoHsrpExtMib::Chsrpextiftable


class CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry : public ydk::Entity
{
    public:
        Chsrpextifentry();
        ~Chsrpextifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf chsrpextifusebia; //type: boolean
        ydk::YLeaf chsrpextifrowstatus; //type: Rowstatus

}; // CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry


}
}

#endif /* _CISCO_HSRP_EXT_MIB_ */

