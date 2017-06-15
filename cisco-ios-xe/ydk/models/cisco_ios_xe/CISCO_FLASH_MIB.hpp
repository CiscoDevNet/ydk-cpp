#ifndef _CISCO_FLASH_MIB_
#define _CISCO_FLASH_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_FLASH_MIB {

class CiscoFlashMib : public Entity
{
    public:
        CiscoFlashMib();
        ~CiscoFlashMib();

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

        class Ciscoflashdevice; //type: CiscoFlashMib::Ciscoflashdevice
        class Ciscoflashcfg; //type: CiscoFlashMib::Ciscoflashcfg
        class Ciscoflashdevicetable; //type: CiscoFlashMib::Ciscoflashdevicetable
        class Ciscoflashchiptable; //type: CiscoFlashMib::Ciscoflashchiptable
        class Ciscoflashpartitiontable; //type: CiscoFlashMib::Ciscoflashpartitiontable
        class Ciscoflashfiletable; //type: CiscoFlashMib::Ciscoflashfiletable
        class Ciscoflashfilebytypetable; //type: CiscoFlashMib::Ciscoflashfilebytypetable
        class Ciscoflashcopytable; //type: CiscoFlashMib::Ciscoflashcopytable
        class Ciscoflashpartitioningtable; //type: CiscoFlashMib::Ciscoflashpartitioningtable
        class Ciscoflashmiscoptable; //type: CiscoFlashMib::Ciscoflashmiscoptable

        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashcfg> ciscoflashcfg_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashchiptable> ciscoflashchiptable_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashcopytable> ciscoflashcopytable_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevice> ciscoflashdevice_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable> ciscoflashdevicetable_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfilebytypetable> ciscoflashfilebytypetable_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfiletable> ciscoflashfiletable_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashmiscoptable> ciscoflashmiscoptable_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitioningtable> ciscoflashpartitioningtable_;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable> ciscoflashpartitiontable_;
        
}; // CiscoFlashMib


class CiscoFlashMib::Ciscoflashdevice : public Entity
{
    public:
        Ciscoflashdevice();
        ~Ciscoflashdevice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoflashdevicessupported; //type: uint32

}; // CiscoFlashMib::Ciscoflashdevice


class CiscoFlashMib::Ciscoflashcfg : public Entity
{
    public:
        Ciscoflashcfg();
        ~Ciscoflashcfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoflashcfgdevinsnotifenable; //type: boolean
        YLeaf ciscoflashcfgdevremnotifenable; //type: boolean
        YLeaf ciscoflashpartitionlowspacenotifenable; //type: boolean

}; // CiscoFlashMib::Ciscoflashcfg


class CiscoFlashMib::Ciscoflashdevicetable : public Entity
{
    public:
        Ciscoflashdevicetable();
        ~Ciscoflashdevicetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashdeviceentry; //type: CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry> > ciscoflashdeviceentry_;
        
}; // CiscoFlashMib::Ciscoflashdevicetable


class CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry : public Entity
{
    public:
        Ciscoflashdeviceentry();
        ~Ciscoflashdeviceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoflashdeviceindex; //type: uint32
        YLeaf ciscoflashdevicesize; //type: uint32
        YLeaf ciscoflashdeviceminpartitionsize; //type: uint32
        YLeaf ciscoflashdevicemaxpartitions; //type: uint32
        YLeaf ciscoflashdevicepartitions; //type: uint32
        YLeaf ciscoflashdevicechipcount; //type: int32
        YLeaf ciscoflashdevicename; //type: string
        YLeaf ciscoflashdevicedescr; //type: string
        YLeaf ciscoflashdevicecontroller; //type: string
        YLeaf ciscoflashdevicecard; //type: string
        YLeaf ciscoflashdeviceprogrammingjumper; //type: CiscoflashdeviceprogrammingjumperEnum
        YLeaf ciscoflashdeviceinittime; //type: uint32
        YLeaf ciscoflashdeviceremovable; //type: boolean
        YLeaf ciscoflashphyentindex; //type: int32
        YLeaf ciscoflashdevicenameextended; //type: string
        YLeaf ciscoflashdevicesizeextended; //type: uint64
        YLeaf ciscoflashdeviceminpartitionsizeextended; //type: uint64
        class CiscoflashdeviceprogrammingjumperEnum;

}; // CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry


class CiscoFlashMib::Ciscoflashchiptable : public Entity
{
    public:
        Ciscoflashchiptable();
        ~Ciscoflashchiptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashchipentry; //type: CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry> > ciscoflashchipentry_;
        
}; // CiscoFlashMib::Ciscoflashchiptable


class CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry : public Entity
{
    public:
        Ciscoflashchipentry();
        ~Ciscoflashchipentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        YLeaf ciscoflashdeviceindex;
        YLeaf ciscoflashchipindex; //type: int32
        YLeaf ciscoflashchipcode; //type: string
        YLeaf ciscoflashchipdescr; //type: string
        YLeaf ciscoflashchipwriteretries; //type: uint32
        YLeaf ciscoflashchiperaseretries; //type: uint32
        YLeaf ciscoflashchipmaxwriteretries; //type: uint32
        YLeaf ciscoflashchipmaxeraseretries; //type: uint32

}; // CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry


class CiscoFlashMib::Ciscoflashpartitiontable : public Entity
{
    public:
        Ciscoflashpartitiontable();
        ~Ciscoflashpartitiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashpartitionentry; //type: CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry> > ciscoflashpartitionentry_;
        
}; // CiscoFlashMib::Ciscoflashpartitiontable


class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry : public Entity
{
    public:
        Ciscoflashpartitionentry();
        ~Ciscoflashpartitionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        YLeaf ciscoflashdeviceindex;
        YLeaf ciscoflashpartitionindex; //type: uint32
        YLeaf ciscoflashpartitionstartchip; //type: int32
        YLeaf ciscoflashpartitionendchip; //type: int32
        YLeaf ciscoflashpartitionsize; //type: uint32
        YLeaf ciscoflashpartitionfreespace; //type: uint32
        YLeaf ciscoflashpartitionfilecount; //type: uint32
        YLeaf ciscoflashpartitionchecksumalgorithm; //type: CiscoflashpartitionchecksumalgorithmEnum
        YLeaf ciscoflashpartitionstatus; //type: CiscoflashpartitionstatusEnum
        YLeaf ciscoflashpartitionupgrademethod; //type: CiscoflashpartitionupgrademethodEnum
        YLeaf ciscoflashpartitionname; //type: string
        YLeaf ciscoflashpartitionneederasure; //type: boolean
        YLeaf ciscoflashpartitionfilenamelength; //type: int32
        YLeaf ciscoflashpartitionsizeextended; //type: uint64
        YLeaf ciscoflashpartitionfreespaceextended; //type: uint64
        YLeaf ciscoflashpartitionlowspacenotifthreshold; //type: int32
        class CiscoflashpartitionchecksumalgorithmEnum;
        class CiscoflashpartitionstatusEnum;
        class CiscoflashpartitionupgrademethodEnum;

}; // CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry


class CiscoFlashMib::Ciscoflashfiletable : public Entity
{
    public:
        Ciscoflashfiletable();
        ~Ciscoflashfiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashfileentry; //type: CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry> > ciscoflashfileentry_;
        
}; // CiscoFlashMib::Ciscoflashfiletable


class CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry : public Entity
{
    public:
        Ciscoflashfileentry();
        ~Ciscoflashfileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::ciscoflashpartitionindex)
        YLeaf ciscoflashpartitionindex;
        YLeaf ciscoflashfileindex; //type: uint32
        YLeaf ciscoflashfilesize; //type: uint32
        YLeaf ciscoflashfilechecksum; //type: binary
        YLeaf ciscoflashfilestatus; //type: CiscoflashfilestatusEnum
        YLeaf ciscoflashfilename; //type: string
        YLeaf ciscoflashfiletype; //type: FlashfiletypeEnum
        YLeaf ciscoflashfiledate; //type: string
        class CiscoflashfilestatusEnum;

}; // CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry


class CiscoFlashMib::Ciscoflashfilebytypetable : public Entity
{
    public:
        Ciscoflashfilebytypetable();
        ~Ciscoflashfilebytypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashfilebytypeentry; //type: CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry> > ciscoflashfilebytypeentry_;
        
}; // CiscoFlashMib::Ciscoflashfilebytypetable


class CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry : public Entity
{
    public:
        Ciscoflashfilebytypeentry();
        ~Ciscoflashfilebytypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoflashfiletype; //type: FlashfiletypeEnum
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::ciscoflashpartitionindex)
        YLeaf ciscoflashpartitionindex;
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::ciscoflashfileindex)
        YLeaf ciscoflashfileindex;
        YLeaf ciscoflashfilebytypesize; //type: uint32
        YLeaf ciscoflashfilebytypechecksum; //type: binary
        YLeaf ciscoflashfilebytypestatus; //type: CiscoflashfilebytypestatusEnum
        YLeaf ciscoflashfilebytypename; //type: string
        YLeaf ciscoflashfilebytypedate; //type: string
        class CiscoflashfilebytypestatusEnum;

}; // CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry


class CiscoFlashMib::Ciscoflashcopytable : public Entity
{
    public:
        Ciscoflashcopytable();
        ~Ciscoflashcopytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashcopyentry; //type: CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry> > ciscoflashcopyentry_;
        
}; // CiscoFlashMib::Ciscoflashcopytable


class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry : public Entity
{
    public:
        Ciscoflashcopyentry();
        ~Ciscoflashcopyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoflashcopyserialnumber; //type: int32
        YLeaf ciscoflashcopycommand; //type: CiscoflashcopycommandEnum
        YLeaf ciscoflashcopyprotocol; //type: CiscoflashcopyprotocolEnum
        YLeaf ciscoflashcopyserveraddress; //type: string
        YLeaf ciscoflashcopysourcename; //type: string
        YLeaf ciscoflashcopydestinationname; //type: string
        YLeaf ciscoflashcopyremoteusername; //type: string
        YLeaf ciscoflashcopystatus; //type: CiscoflashcopystatusEnum
        YLeaf ciscoflashcopynotifyoncompletion; //type: boolean
        YLeaf ciscoflashcopytime; //type: uint32
        YLeaf ciscoflashcopyentrystatus; //type: RowstatusEnum
        YLeaf ciscoflashcopyverify; //type: boolean
        YLeaf ciscoflashcopyserveraddrtype; //type: InetaddresstypeEnum
        YLeaf ciscoflashcopyserveraddrrev1; //type: binary
        YLeaf ciscoflashcopyremotepassword; //type: string
        class CiscoflashcopycommandEnum;
        class CiscoflashcopyprotocolEnum;
        class CiscoflashcopystatusEnum;

}; // CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry


class CiscoFlashMib::Ciscoflashpartitioningtable : public Entity
{
    public:
        Ciscoflashpartitioningtable();
        ~Ciscoflashpartitioningtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashpartitioningentry; //type: CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry> > ciscoflashpartitioningentry_;
        
}; // CiscoFlashMib::Ciscoflashpartitioningtable


class CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry : public Entity
{
    public:
        Ciscoflashpartitioningentry();
        ~Ciscoflashpartitioningentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoflashpartitioningserialnumber; //type: int32
        YLeaf ciscoflashpartitioningcommand; //type: CiscoflashpartitioningcommandEnum
        YLeaf ciscoflashpartitioningdestinationname; //type: string
        YLeaf ciscoflashpartitioningpartitioncount; //type: uint32
        YLeaf ciscoflashpartitioningpartitionsizes; //type: string
        YLeaf ciscoflashpartitioningstatus; //type: CiscoflashpartitioningstatusEnum
        YLeaf ciscoflashpartitioningnotifyoncompletion; //type: boolean
        YLeaf ciscoflashpartitioningtime; //type: uint32
        YLeaf ciscoflashpartitioningentrystatus; //type: RowstatusEnum
        class CiscoflashpartitioningcommandEnum;
        class CiscoflashpartitioningstatusEnum;

}; // CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry


class CiscoFlashMib::Ciscoflashmiscoptable : public Entity
{
    public:
        Ciscoflashmiscoptable();
        ~Ciscoflashmiscoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoflashmiscopentry; //type: CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry> > ciscoflashmiscopentry_;
        
}; // CiscoFlashMib::Ciscoflashmiscoptable


class CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry : public Entity
{
    public:
        Ciscoflashmiscopentry();
        ~Ciscoflashmiscopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoflashmiscopserialnumber; //type: int32
        YLeaf ciscoflashmiscopcommand; //type: CiscoflashmiscopcommandEnum
        YLeaf ciscoflashmiscopdestinationname; //type: string
        YLeaf ciscoflashmiscopstatus; //type: CiscoflashmiscopstatusEnum
        YLeaf ciscoflashmiscopnotifyoncompletion; //type: boolean
        YLeaf ciscoflashmiscoptime; //type: uint32
        YLeaf ciscoflashmiscopentrystatus; //type: RowstatusEnum
        class CiscoflashmiscopcommandEnum;
        class CiscoflashmiscopstatusEnum;

}; // CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry

class FlashfiletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf config;
        static const Enum::YLeaf image;
        static const Enum::YLeaf directory;
        static const Enum::YLeaf crashinfo;

};

class CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::CiscoflashdeviceprogrammingjumperEnum : public Enum
{
    public:
        static const Enum::YLeaf installed;
        static const Enum::YLeaf notInstalled;
        static const Enum::YLeaf unknown;

};

class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionchecksumalgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf simpleChecksum;
        static const Enum::YLeaf undefined;
        static const Enum::YLeaf simpleCRC;

};

class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf readOnly;
        static const Enum::YLeaf runFromFlash;
        static const Enum::YLeaf readWrite;

};

class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionupgrademethodEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf rxbootFLH;
        static const Enum::YLeaf direct;

};

class CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::CiscoflashfilestatusEnum : public Enum
{
    public:
        static const Enum::YLeaf deleted;
        static const Enum::YLeaf invalidChecksum;
        static const Enum::YLeaf valid;

};

class CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::CiscoflashfilebytypestatusEnum : public Enum
{
    public:
        static const Enum::YLeaf deleted;
        static const Enum::YLeaf invalidChecksum;
        static const Enum::YLeaf valid;

};

class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopycommandEnum : public Enum
{
    public:
        static const Enum::YLeaf copyToFlashWithErase;
        static const Enum::YLeaf copyToFlashWithoutErase;
        static const Enum::YLeaf copyFromFlash;
        static const Enum::YLeaf copyFromFlhLog;

};

class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopyprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf tftp;
        static const Enum::YLeaf rcp;
        static const Enum::YLeaf lex;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf scp;
        static const Enum::YLeaf sftp;

};

class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum : public Enum
{
    public:
        static const Enum::YLeaf copyOperationPending;
        static const Enum::YLeaf copyInProgress;
        static const Enum::YLeaf copyOperationSuccess;
        static const Enum::YLeaf copyInvalidOperation;
        static const Enum::YLeaf copyInvalidProtocol;
        static const Enum::YLeaf copyInvalidSourceName;
        static const Enum::YLeaf copyInvalidDestName;
        static const Enum::YLeaf copyInvalidServerAddress;
        static const Enum::YLeaf copyDeviceBusy;
        static const Enum::YLeaf copyDeviceOpenError;
        static const Enum::YLeaf copyDeviceError;
        static const Enum::YLeaf copyDeviceNotProgrammable;
        static const Enum::YLeaf copyDeviceFull;
        static const Enum::YLeaf copyFileOpenError;
        static const Enum::YLeaf copyFileTransferError;
        static const Enum::YLeaf copyFileChecksumError;
        static const Enum::YLeaf copyNoMemory;
        static const Enum::YLeaf copyUnknownFailure;
        static const Enum::YLeaf copyInvalidSignature;
        static const Enum::YLeaf copyProhibited;

};

class CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningcommandEnum : public Enum
{
    public:
        static const Enum::YLeaf partition;

};

class CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf partitioningInProgress;
        static const Enum::YLeaf partitioningOperationSuccess;
        static const Enum::YLeaf partitioningInvalidOperation;
        static const Enum::YLeaf partitioningInvalidDestName;
        static const Enum::YLeaf partitioningInvalidPartitionCount;
        static const Enum::YLeaf partitioningInvalidPartitionSizes;
        static const Enum::YLeaf partitioningDeviceBusy;
        static const Enum::YLeaf partitioningDeviceOpenError;
        static const Enum::YLeaf partitioningDeviceError;
        static const Enum::YLeaf partitioningNoMemory;
        static const Enum::YLeaf partitioningUnknownFailure;

};

class CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopcommandEnum : public Enum
{
    public:
        static const Enum::YLeaf erase;
        static const Enum::YLeaf verify;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf undelete;
        static const Enum::YLeaf squeeze;
        static const Enum::YLeaf format;

};

class CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf miscOpInProgress;
        static const Enum::YLeaf miscOpOperationSuccess;
        static const Enum::YLeaf miscOpInvalidOperation;
        static const Enum::YLeaf miscOpInvalidDestName;
        static const Enum::YLeaf miscOpDeviceBusy;
        static const Enum::YLeaf miscOpDeviceOpenError;
        static const Enum::YLeaf miscOpDeviceError;
        static const Enum::YLeaf miscOpDeviceNotProgrammable;
        static const Enum::YLeaf miscOpFileOpenError;
        static const Enum::YLeaf miscOpFileDeleteFailure;
        static const Enum::YLeaf miscOpFileUndeleteFailure;
        static const Enum::YLeaf miscOpFileChecksumError;
        static const Enum::YLeaf miscOpNoMemory;
        static const Enum::YLeaf miscOpUnknownFailure;
        static const Enum::YLeaf miscOpSqueezeFailure;
        static const Enum::YLeaf miscOpNoSuchFile;
        static const Enum::YLeaf miscOpFormatFailure;

};


}
}

#endif /* _CISCO_FLASH_MIB_ */

