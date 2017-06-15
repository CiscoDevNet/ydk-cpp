#ifndef _CISCO_IPSLA_AUTOMEASURE_MIB_
#define _CISCO_IPSLA_AUTOMEASURE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IPSLA_AUTOMEASURE_MIB {

class CiscoIpslaAutomeasureMib : public Entity
{
    public:
        CiscoIpslaAutomeasureMib();
        ~CiscoIpslaAutomeasureMib();

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

        class Cipslaautogrouptable; //type: CiscoIpslaAutomeasureMib::Cipslaautogrouptable
        class Cipslaautogroupdesttable; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable
        class Cipslareacttable; //type: CiscoIpslaAutomeasureMib::Cipslareacttable
        class Cipslaautogroupschedtable; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable

        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable> cipslaautogroupdesttable_;
        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable> cipslaautogroupschedtable_;
        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogrouptable> cipslaautogrouptable_;
        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslareacttable> cipslareacttable_;
        
}; // CiscoIpslaAutomeasureMib


class CiscoIpslaAutomeasureMib::Cipslaautogrouptable : public Entity
{
    public:
        Cipslaautogrouptable();
        ~Cipslaautogrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslaautogroupentry; //type: CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry> > cipslaautogroupentry_;
        
}; // CiscoIpslaAutomeasureMib::Cipslaautogrouptable


class CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry : public Entity
{
    public:
        Cipslaautogroupentry();
        ~Cipslaautogroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaautogroupname; //type: string
        YLeaf cipslaautogroupdescription; //type: string
        YLeaf cipslaautogroupdestinationname; //type: string
        YLeaf cipslaautogroupaddestport; //type: uint16
        YLeaf cipslaautogroupopertemplatename; //type: string
        YLeaf cipslaautogroupschedulerid; //type: string
        YLeaf cipslaautogroupqosenable; //type: boolean
        YLeaf cipslaautogroupopertype; //type: IpslaopertypeEnum
        YLeaf cipslaautogroupdestipadenable; //type: boolean
        YLeaf cipslaautogroupadmeasureretry; //type: uint32
        YLeaf cipslaautogroupaddestipageout; //type: uint32
        YLeaf cipslaautogroupstoragetype; //type: StoragetypeEnum
        YLeaf cipslaautogrouprowstatus; //type: RowstatusEnum

}; // CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry


class CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable : public Entity
{
    public:
        Cipslaautogroupdesttable();
        ~Cipslaautogroupdesttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslaautogroupdestentry; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry> > cipslaautogroupdestentry_;
        
}; // CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable


class CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry : public Entity
{
    public:
        Cipslaautogroupdestentry();
        ~Cipslaautogroupdestentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaautogroupdestname; //type: string
        YLeaf cipslaautogroupdestipaddrtype; //type: InetaddresstypeEnum
        YLeaf cipslaautogroupdestipaddr; //type: binary
        YLeaf cipslaautogroupdestport; //type: uint16
        YLeaf cipslaautogroupdeststoragetype; //type: StoragetypeEnum
        YLeaf cipslaautogroupdestrowstatus; //type: RowstatusEnum

}; // CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry


class CiscoIpslaAutomeasureMib::Cipslareacttable : public Entity
{
    public:
        Cipslareacttable();
        ~Cipslareacttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslareactentry; //type: CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry> > cipslareactentry_;
        
}; // CiscoIpslaAutomeasureMib::Cipslareacttable


class CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry : public Entity
{
    public:
        Cipslareactentry();
        ~Cipslareactentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaautogroupopertype; //type: IpslaopertypeEnum
        YLeaf cipslareactconfigindex; //type: uint32
        //type: string (refers to CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::cipslaautogroupopertemplatename)
        YLeaf cipslaautogroupopertemplatename;
        YLeaf cipslareactvar; //type: IpslareactvarEnum
        YLeaf cipslareactthresholdtype; //type: CipslareactthresholdtypeEnum
        YLeaf cipslareactactiontype; //type: CipslareactactiontypeEnum
        YLeaf cipslareactthresholdrising; //type: uint32
        YLeaf cipslareactthresholdfalling; //type: uint32
        YLeaf cipslareactthresholdcountx; //type: uint32
        YLeaf cipslareactthresholdcounty; //type: uint32
        YLeaf cipslareactstoragetype; //type: StoragetypeEnum
        YLeaf cipslareactrowstatus; //type: RowstatusEnum
        class CipslareactthresholdtypeEnum;
        class CipslareactactiontypeEnum;

}; // CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry


class CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable : public Entity
{
    public:
        Cipslaautogroupschedtable();
        ~Cipslaautogroupschedtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslaautogroupschedentry; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry> > cipslaautogroupschedentry_;
        
}; // CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable


class CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry : public Entity
{
    public:
        Cipslaautogroupschedentry();
        ~Cipslaautogroupschedentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaautogroupschedid; //type: string
        YLeaf cipslaautogroupschedperiod; //type: uint32
        YLeaf cipslaautogroupschedinterval; //type: uint32
        YLeaf cipslaautogroupschedlife; //type: uint32
        YLeaf cipslaautogroupschedageout; //type: uint32
        YLeaf cipslaautogroupschedmaxinterval; //type: uint32
        YLeaf cipslaautogroupschedmininterval; //type: uint32
        YLeaf cipslaautogroupschedstarttime; //type: uint32
        YLeaf cipslaautogroupschedstoragetype; //type: StoragetypeEnum
        YLeaf cipslaautogroupschedrowstatus; //type: RowstatusEnum

}; // CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry

class CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactthresholdtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf never;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf consecutive;
        static const Enum::YLeaf xOfy;
        static const Enum::YLeaf average;

};

class CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactactiontypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf notificationOnly;

};


}
}

#endif /* _CISCO_IPSLA_AUTOMEASURE_MIB_ */

