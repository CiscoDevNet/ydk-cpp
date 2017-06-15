#ifndef _CISCO_HSRP_EXT_MIB_
#define _CISCO_HSRP_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_HSRP_EXT_MIB {

class CiscoHsrpExtMib : public Entity
{
    public:
        CiscoHsrpExtMib();
        ~CiscoHsrpExtMib();

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

        class Chsrpextiftrackedtable; //type: CiscoHsrpExtMib::Chsrpextiftrackedtable
        class Chsrpextsecaddrtable; //type: CiscoHsrpExtMib::Chsrpextsecaddrtable
        class Chsrpextifstandbytable; //type: CiscoHsrpExtMib::Chsrpextifstandbytable
        class Chsrpextiftable; //type: CiscoHsrpExtMib::Chsrpextiftable

        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextifstandbytable> chsrpextifstandbytable_;
        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftable> chsrpextiftable_;
        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftrackedtable> chsrpextiftrackedtable_;
        std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextsecaddrtable> chsrpextsecaddrtable_;
        
}; // CiscoHsrpExtMib


class CiscoHsrpExtMib::Chsrpextiftrackedtable : public Entity
{
    public:
        Chsrpextiftrackedtable();
        ~Chsrpextiftrackedtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Chsrpextiftrackedentry; //type: CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry> > chsrpextiftrackedentry_;
        
}; // CiscoHsrpExtMib::Chsrpextiftrackedtable


class CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry : public Entity
{
    public:
        Chsrpextiftrackedentry();
        ~Chsrpextiftrackedentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: uint32 (refers to CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        YLeaf chsrpgrpnumber;
        YLeaf chsrpextiftracked; //type: int32
        YLeaf chsrpextiftrackedpriority; //type: uint32
        YLeaf chsrpextiftrackedrowstatus; //type: RowstatusEnum
        YLeaf chsrpextiftrackedipnone; //type: boolean

}; // CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry


class CiscoHsrpExtMib::Chsrpextsecaddrtable : public Entity
{
    public:
        Chsrpextsecaddrtable();
        ~Chsrpextsecaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Chsrpextsecaddrentry; //type: CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry> > chsrpextsecaddrentry_;
        
}; // CiscoHsrpExtMib::Chsrpextsecaddrtable


class CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry : public Entity
{
    public:
        Chsrpextsecaddrentry();
        ~Chsrpextsecaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: uint32 (refers to CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        YLeaf chsrpgrpnumber;
        YLeaf chsrpextsecaddraddress; //type: string
        YLeaf chsrpextsecaddrrowstatus; //type: RowstatusEnum

}; // CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry


class CiscoHsrpExtMib::Chsrpextifstandbytable : public Entity
{
    public:
        Chsrpextifstandbytable();
        ~Chsrpextifstandbytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Chsrpextifstandbyentry; //type: CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry> > chsrpextifstandbyentry_;
        
}; // CiscoHsrpExtMib::Chsrpextifstandbytable


class CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry : public Entity
{
    public:
        Chsrpextifstandbyentry();
        ~Chsrpextifstandbyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: uint32 (refers to CISCO_HSRP_MIB::CiscoHsrpMib::Chsrpgrptable::Chsrpgrpentry::chsrpgrpnumber)
        YLeaf chsrpgrpnumber;
        YLeaf chsrpextifstandbyindex; //type: uint32
        YLeaf chsrpextifstandbydestaddrtype; //type: InetaddresstypeEnum
        YLeaf chsrpextifstandbydestaddr; //type: binary
        YLeaf chsrpextifstandbysourceaddrtype; //type: InetaddresstypeEnum
        YLeaf chsrpextifstandbysourceaddr; //type: binary
        YLeaf chsrpextifstandbyrowstatus; //type: RowstatusEnum

}; // CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry


class CiscoHsrpExtMib::Chsrpextiftable : public Entity
{
    public:
        Chsrpextiftable();
        ~Chsrpextiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Chsrpextifentry; //type: CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry

        std::vector<std::shared_ptr<CISCO_HSRP_EXT_MIB::CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry> > chsrpextifentry_;
        
}; // CiscoHsrpExtMib::Chsrpextiftable


class CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry : public Entity
{
    public:
        Chsrpextifentry();
        ~Chsrpextifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf chsrpextifusebia; //type: boolean
        YLeaf chsrpextifrowstatus; //type: RowstatusEnum

}; // CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry


}
}

#endif /* _CISCO_HSRP_EXT_MIB_ */

