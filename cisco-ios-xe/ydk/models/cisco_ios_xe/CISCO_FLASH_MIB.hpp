#ifndef _CISCO_FLASH_MIB_
#define _CISCO_FLASH_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_FLASH_MIB {

class CiscoFlashMib : public ydk::Entity
{
    public:
        CiscoFlashMib();
        ~CiscoFlashMib();

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

        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashcfg> ciscoflashcfg;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashchiptable> ciscoflashchiptable;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashcopytable> ciscoflashcopytable;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevice> ciscoflashdevice;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable> ciscoflashdevicetable;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfilebytypetable> ciscoflashfilebytypetable;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfiletable> ciscoflashfiletable;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashmiscoptable> ciscoflashmiscoptable;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitioningtable> ciscoflashpartitioningtable;
        std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable> ciscoflashpartitiontable;
        
}; // CiscoFlashMib


class CiscoFlashMib::Ciscoflashdevice : public ydk::Entity
{
    public:
        Ciscoflashdevice();
        ~Ciscoflashdevice();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoflashdevicessupported; //type: uint32

}; // CiscoFlashMib::Ciscoflashdevice


class CiscoFlashMib::Ciscoflashcfg : public ydk::Entity
{
    public:
        Ciscoflashcfg();
        ~Ciscoflashcfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoflashcfgdevinsnotifenable; //type: boolean
        ydk::YLeaf ciscoflashcfgdevremnotifenable; //type: boolean
        ydk::YLeaf ciscoflashpartitionlowspacenotifenable; //type: boolean

}; // CiscoFlashMib::Ciscoflashcfg


class CiscoFlashMib::Ciscoflashdevicetable : public ydk::Entity
{
    public:
        Ciscoflashdevicetable();
        ~Ciscoflashdevicetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashdeviceentry; //type: CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry> > ciscoflashdeviceentry;
        
}; // CiscoFlashMib::Ciscoflashdevicetable


class CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry : public ydk::Entity
{
    public:
        Ciscoflashdeviceentry();
        ~Ciscoflashdeviceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoflashdeviceindex; //type: uint32
        ydk::YLeaf ciscoflashdevicesize; //type: uint32
        ydk::YLeaf ciscoflashdeviceminpartitionsize; //type: uint32
        ydk::YLeaf ciscoflashdevicemaxpartitions; //type: uint32
        ydk::YLeaf ciscoflashdevicepartitions; //type: uint32
        ydk::YLeaf ciscoflashdevicechipcount; //type: int32
        ydk::YLeaf ciscoflashdevicename; //type: string
        ydk::YLeaf ciscoflashdevicedescr; //type: string
        ydk::YLeaf ciscoflashdevicecontroller; //type: string
        ydk::YLeaf ciscoflashdevicecard; //type: string
        ydk::YLeaf ciscoflashdeviceprogrammingjumper; //type: Ciscoflashdeviceprogrammingjumper
        ydk::YLeaf ciscoflashdeviceinittime; //type: uint32
        ydk::YLeaf ciscoflashdeviceremovable; //type: boolean
        ydk::YLeaf ciscoflashphyentindex; //type: int32
        ydk::YLeaf ciscoflashdevicenameextended; //type: string
        ydk::YLeaf ciscoflashdevicesizeextended; //type: uint64
        ydk::YLeaf ciscoflashdeviceminpartitionsizeextended; //type: uint64
        class Ciscoflashdeviceprogrammingjumper;

}; // CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry


class CiscoFlashMib::Ciscoflashchiptable : public ydk::Entity
{
    public:
        Ciscoflashchiptable();
        ~Ciscoflashchiptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashchipentry; //type: CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry> > ciscoflashchipentry;
        
}; // CiscoFlashMib::Ciscoflashchiptable


class CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry : public ydk::Entity
{
    public:
        Ciscoflashchipentry();
        ~Ciscoflashchipentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        ydk::YLeaf ciscoflashchipindex; //type: int32
        ydk::YLeaf ciscoflashchipcode; //type: string
        ydk::YLeaf ciscoflashchipdescr; //type: string
        ydk::YLeaf ciscoflashchipwriteretries; //type: uint32
        ydk::YLeaf ciscoflashchiperaseretries; //type: uint32
        ydk::YLeaf ciscoflashchipmaxwriteretries; //type: uint32
        ydk::YLeaf ciscoflashchipmaxeraseretries; //type: uint32

}; // CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry


class CiscoFlashMib::Ciscoflashpartitiontable : public ydk::Entity
{
    public:
        Ciscoflashpartitiontable();
        ~Ciscoflashpartitiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashpartitionentry; //type: CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry> > ciscoflashpartitionentry;
        
}; // CiscoFlashMib::Ciscoflashpartitiontable


class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry : public ydk::Entity
{
    public:
        Ciscoflashpartitionentry();
        ~Ciscoflashpartitionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        ydk::YLeaf ciscoflashpartitionindex; //type: uint32
        ydk::YLeaf ciscoflashpartitionstartchip; //type: int32
        ydk::YLeaf ciscoflashpartitionendchip; //type: int32
        ydk::YLeaf ciscoflashpartitionsize; //type: uint32
        ydk::YLeaf ciscoflashpartitionfreespace; //type: uint32
        ydk::YLeaf ciscoflashpartitionfilecount; //type: uint32
        ydk::YLeaf ciscoflashpartitionchecksumalgorithm; //type: Ciscoflashpartitionchecksumalgorithm
        ydk::YLeaf ciscoflashpartitionstatus; //type: Ciscoflashpartitionstatus
        ydk::YLeaf ciscoflashpartitionupgrademethod; //type: Ciscoflashpartitionupgrademethod
        ydk::YLeaf ciscoflashpartitionname; //type: string
        ydk::YLeaf ciscoflashpartitionneederasure; //type: boolean
        ydk::YLeaf ciscoflashpartitionfilenamelength; //type: int32
        ydk::YLeaf ciscoflashpartitionsizeextended; //type: uint64
        ydk::YLeaf ciscoflashpartitionfreespaceextended; //type: uint64
        ydk::YLeaf ciscoflashpartitionlowspacenotifthreshold; //type: int32
        class Ciscoflashpartitionchecksumalgorithm;
        class Ciscoflashpartitionstatus;
        class Ciscoflashpartitionupgrademethod;

}; // CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry


class CiscoFlashMib::Ciscoflashfiletable : public ydk::Entity
{
    public:
        Ciscoflashfiletable();
        ~Ciscoflashfiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashfileentry; //type: CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry> > ciscoflashfileentry;
        
}; // CiscoFlashMib::Ciscoflashfiletable


class CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry : public ydk::Entity
{
    public:
        Ciscoflashfileentry();
        ~Ciscoflashfileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::ciscoflashpartitionindex)
        ydk::YLeaf ciscoflashpartitionindex;
        ydk::YLeaf ciscoflashfileindex; //type: uint32
        ydk::YLeaf ciscoflashfilesize; //type: uint32
        ydk::YLeaf ciscoflashfilechecksum; //type: binary
        ydk::YLeaf ciscoflashfilestatus; //type: Ciscoflashfilestatus
        ydk::YLeaf ciscoflashfilename; //type: string
        ydk::YLeaf ciscoflashfiletype; //type: Flashfiletype
        ydk::YLeaf ciscoflashfiledate; //type: string
        class Ciscoflashfilestatus;

}; // CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry


class CiscoFlashMib::Ciscoflashfilebytypetable : public ydk::Entity
{
    public:
        Ciscoflashfilebytypetable();
        ~Ciscoflashfilebytypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashfilebytypeentry; //type: CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry> > ciscoflashfilebytypeentry;
        
}; // CiscoFlashMib::Ciscoflashfilebytypetable


class CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry : public ydk::Entity
{
    public:
        Ciscoflashfilebytypeentry();
        ~Ciscoflashfilebytypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoflashfiletype; //type: Flashfiletype
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::ciscoflashpartitionindex)
        ydk::YLeaf ciscoflashpartitionindex;
        //type: uint32 (refers to CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::ciscoflashfileindex)
        ydk::YLeaf ciscoflashfileindex;
        ydk::YLeaf ciscoflashfilebytypesize; //type: uint32
        ydk::YLeaf ciscoflashfilebytypechecksum; //type: binary
        ydk::YLeaf ciscoflashfilebytypestatus; //type: Ciscoflashfilebytypestatus
        ydk::YLeaf ciscoflashfilebytypename; //type: string
        ydk::YLeaf ciscoflashfilebytypedate; //type: string
        class Ciscoflashfilebytypestatus;

}; // CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry


class CiscoFlashMib::Ciscoflashcopytable : public ydk::Entity
{
    public:
        Ciscoflashcopytable();
        ~Ciscoflashcopytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashcopyentry; //type: CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry> > ciscoflashcopyentry;
        
}; // CiscoFlashMib::Ciscoflashcopytable


class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry : public ydk::Entity
{
    public:
        Ciscoflashcopyentry();
        ~Ciscoflashcopyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoflashcopyserialnumber; //type: int32
        ydk::YLeaf ciscoflashcopycommand; //type: Ciscoflashcopycommand
        ydk::YLeaf ciscoflashcopyprotocol; //type: Ciscoflashcopyprotocol
        ydk::YLeaf ciscoflashcopyserveraddress; //type: string
        ydk::YLeaf ciscoflashcopysourcename; //type: string
        ydk::YLeaf ciscoflashcopydestinationname; //type: string
        ydk::YLeaf ciscoflashcopyremoteusername; //type: string
        ydk::YLeaf ciscoflashcopystatus; //type: Ciscoflashcopystatus
        ydk::YLeaf ciscoflashcopynotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashcopytime; //type: uint32
        ydk::YLeaf ciscoflashcopyentrystatus; //type: Rowstatus
        ydk::YLeaf ciscoflashcopyverify; //type: boolean
        ydk::YLeaf ciscoflashcopyserveraddrtype; //type: Inetaddresstype
        ydk::YLeaf ciscoflashcopyserveraddrrev1; //type: binary
        ydk::YLeaf ciscoflashcopyremotepassword; //type: string
        class Ciscoflashcopycommand;
        class Ciscoflashcopyprotocol;
        class Ciscoflashcopystatus;

}; // CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry


class CiscoFlashMib::Ciscoflashpartitioningtable : public ydk::Entity
{
    public:
        Ciscoflashpartitioningtable();
        ~Ciscoflashpartitioningtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashpartitioningentry; //type: CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry> > ciscoflashpartitioningentry;
        
}; // CiscoFlashMib::Ciscoflashpartitioningtable


class CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry : public ydk::Entity
{
    public:
        Ciscoflashpartitioningentry();
        ~Ciscoflashpartitioningentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoflashpartitioningserialnumber; //type: int32
        ydk::YLeaf ciscoflashpartitioningcommand; //type: Ciscoflashpartitioningcommand
        ydk::YLeaf ciscoflashpartitioningdestinationname; //type: string
        ydk::YLeaf ciscoflashpartitioningpartitioncount; //type: uint32
        ydk::YLeaf ciscoflashpartitioningpartitionsizes; //type: string
        ydk::YLeaf ciscoflashpartitioningstatus; //type: Ciscoflashpartitioningstatus
        ydk::YLeaf ciscoflashpartitioningnotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashpartitioningtime; //type: uint32
        ydk::YLeaf ciscoflashpartitioningentrystatus; //type: Rowstatus
        class Ciscoflashpartitioningcommand;
        class Ciscoflashpartitioningstatus;

}; // CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry


class CiscoFlashMib::Ciscoflashmiscoptable : public ydk::Entity
{
    public:
        Ciscoflashmiscoptable();
        ~Ciscoflashmiscoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoflashmiscopentry; //type: CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry

        std::vector<std::shared_ptr<CISCO_FLASH_MIB::CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry> > ciscoflashmiscopentry;
        
}; // CiscoFlashMib::Ciscoflashmiscoptable


class CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry : public ydk::Entity
{
    public:
        Ciscoflashmiscopentry();
        ~Ciscoflashmiscopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoflashmiscopserialnumber; //type: int32
        ydk::YLeaf ciscoflashmiscopcommand; //type: Ciscoflashmiscopcommand
        ydk::YLeaf ciscoflashmiscopdestinationname; //type: string
        ydk::YLeaf ciscoflashmiscopstatus; //type: Ciscoflashmiscopstatus
        ydk::YLeaf ciscoflashmiscopnotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashmiscoptime; //type: uint32
        ydk::YLeaf ciscoflashmiscopentrystatus; //type: Rowstatus
        class Ciscoflashmiscopcommand;
        class Ciscoflashmiscopstatus;

}; // CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry

class Flashfiletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf config;
        static const ydk::Enum::YLeaf image;
        static const ydk::Enum::YLeaf directory;
        static const ydk::Enum::YLeaf crashinfo;

};

class CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::Ciscoflashdeviceprogrammingjumper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf installed;
        static const ydk::Enum::YLeaf notInstalled;
        static const ydk::Enum::YLeaf unknown;

};

class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionchecksumalgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf simpleChecksum;
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf simpleCRC;

};

class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf readOnly;
        static const ydk::Enum::YLeaf runFromFlash;
        static const ydk::Enum::YLeaf readWrite;

};

class CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionupgrademethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf rxbootFLH;
        static const ydk::Enum::YLeaf direct;

};

class CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::Ciscoflashfilestatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf invalidChecksum;
        static const ydk::Enum::YLeaf valid;

};

class CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::Ciscoflashfilebytypestatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf invalidChecksum;
        static const ydk::Enum::YLeaf valid;

};

class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopycommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copyToFlashWithErase;
        static const ydk::Enum::YLeaf copyToFlashWithoutErase;
        static const ydk::Enum::YLeaf copyFromFlash;
        static const ydk::Enum::YLeaf copyFromFlhLog;

};

class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf rcp;
        static const ydk::Enum::YLeaf lex;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp;

};

class CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copyOperationPending;
        static const ydk::Enum::YLeaf copyInProgress;
        static const ydk::Enum::YLeaf copyOperationSuccess;
        static const ydk::Enum::YLeaf copyInvalidOperation;
        static const ydk::Enum::YLeaf copyInvalidProtocol;
        static const ydk::Enum::YLeaf copyInvalidSourceName;
        static const ydk::Enum::YLeaf copyInvalidDestName;
        static const ydk::Enum::YLeaf copyInvalidServerAddress;
        static const ydk::Enum::YLeaf copyDeviceBusy;
        static const ydk::Enum::YLeaf copyDeviceOpenError;
        static const ydk::Enum::YLeaf copyDeviceError;
        static const ydk::Enum::YLeaf copyDeviceNotProgrammable;
        static const ydk::Enum::YLeaf copyDeviceFull;
        static const ydk::Enum::YLeaf copyFileOpenError;
        static const ydk::Enum::YLeaf copyFileTransferError;
        static const ydk::Enum::YLeaf copyFileChecksumError;
        static const ydk::Enum::YLeaf copyNoMemory;
        static const ydk::Enum::YLeaf copyUnknownFailure;
        static const ydk::Enum::YLeaf copyInvalidSignature;
        static const ydk::Enum::YLeaf copyProhibited;

};

class CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningcommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partition;

};

class CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partitioningInProgress;
        static const ydk::Enum::YLeaf partitioningOperationSuccess;
        static const ydk::Enum::YLeaf partitioningInvalidOperation;
        static const ydk::Enum::YLeaf partitioningInvalidDestName;
        static const ydk::Enum::YLeaf partitioningInvalidPartitionCount;
        static const ydk::Enum::YLeaf partitioningInvalidPartitionSizes;
        static const ydk::Enum::YLeaf partitioningDeviceBusy;
        static const ydk::Enum::YLeaf partitioningDeviceOpenError;
        static const ydk::Enum::YLeaf partitioningDeviceError;
        static const ydk::Enum::YLeaf partitioningNoMemory;
        static const ydk::Enum::YLeaf partitioningUnknownFailure;

};

class CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erase;
        static const ydk::Enum::YLeaf verify;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf undelete;
        static const ydk::Enum::YLeaf squeeze;
        static const ydk::Enum::YLeaf format;

};

class CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf miscOpInProgress;
        static const ydk::Enum::YLeaf miscOpOperationSuccess;
        static const ydk::Enum::YLeaf miscOpInvalidOperation;
        static const ydk::Enum::YLeaf miscOpInvalidDestName;
        static const ydk::Enum::YLeaf miscOpDeviceBusy;
        static const ydk::Enum::YLeaf miscOpDeviceOpenError;
        static const ydk::Enum::YLeaf miscOpDeviceError;
        static const ydk::Enum::YLeaf miscOpDeviceNotProgrammable;
        static const ydk::Enum::YLeaf miscOpFileOpenError;
        static const ydk::Enum::YLeaf miscOpFileDeleteFailure;
        static const ydk::Enum::YLeaf miscOpFileUndeleteFailure;
        static const ydk::Enum::YLeaf miscOpFileChecksumError;
        static const ydk::Enum::YLeaf miscOpNoMemory;
        static const ydk::Enum::YLeaf miscOpUnknownFailure;
        static const ydk::Enum::YLeaf miscOpSqueezeFailure;
        static const ydk::Enum::YLeaf miscOpNoSuchFile;
        static const ydk::Enum::YLeaf miscOpFormatFailure;

};


}
}

#endif /* _CISCO_FLASH_MIB_ */

