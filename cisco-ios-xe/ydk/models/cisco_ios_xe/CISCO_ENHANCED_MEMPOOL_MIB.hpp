#ifndef _CISCO_ENHANCED_MEMPOOL_MIB_
#define _CISCO_ENHANCED_MEMPOOL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENHANCED_MEMPOOL_MIB {

class CISCOENHANCEDMEMPOOLMIB : public ydk::Entity
{
    public:
        CISCOENHANCEDMEMPOOLMIB();
        ~CISCOENHANCEDMEMPOOLMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class CempNotificationConfig; //type: CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig
        class CempMemPoolTable; //type: CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable
        class CempMemBufferPoolTable; //type: CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable
        class CempMemBufferCachePoolTable; //type: CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable

        std::shared_ptr<cisco_ios_xe::CISCO_ENHANCED_MEMPOOL_MIB::CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig> cempnotificationconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_ENHANCED_MEMPOOL_MIB::CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable> cempmempooltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENHANCED_MEMPOOL_MIB::CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable> cempmembufferpooltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENHANCED_MEMPOOL_MIB::CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable> cempmembuffercachepooltable;
        
}; // CISCOENHANCEDMEMPOOLMIB


class CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig : public ydk::Entity
{
    public:
        CempNotificationConfig();
        ~CempNotificationConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cempmembuffernotifyenabled; //type: boolean

}; // CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig


class CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable : public ydk::Entity
{
    public:
        CempMemPoolTable();
        ~CempMemPoolTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CempMemPoolEntry; //type: CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry

        ydk::YList cempmempoolentry;
        
}; // CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable


class CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry : public ydk::Entity
{
    public:
        CempMemPoolEntry();
        ~CempMemPoolEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cempmempoolindex; //type: int32
        ydk::YLeaf cempmempooltype; //type: CempMemPoolTypes
        ydk::YLeaf cempmempoolname; //type: string
        ydk::YLeaf cempmempoolplatformmemory; //type: string
        ydk::YLeaf cempmempoolalternate; //type: int32
        ydk::YLeaf cempmempoolvalid; //type: boolean
        ydk::YLeaf cempmempoolused; //type: uint32
        ydk::YLeaf cempmempoolfree; //type: uint32
        ydk::YLeaf cempmempoollargestfree; //type: uint32
        ydk::YLeaf cempmempoollowestfree; //type: uint32
        ydk::YLeaf cempmempoolusedlowwatermark; //type: uint32
        ydk::YLeaf cempmempoolallochit; //type: uint32
        ydk::YLeaf cempmempoolallocmiss; //type: uint32
        ydk::YLeaf cempmempoolfreehit; //type: uint32
        ydk::YLeaf cempmempoolfreemiss; //type: uint32
        ydk::YLeaf cempmempoolshared; //type: uint32
        ydk::YLeaf cempmempoolusedovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcused; //type: uint64
        ydk::YLeaf cempmempoolfreeovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcfree; //type: uint64
        ydk::YLeaf cempmempoollargestfreeovrflw; //type: uint32
        ydk::YLeaf cempmempoolhclargestfree; //type: uint64
        ydk::YLeaf cempmempoollowestfreeovrflw; //type: uint32
        ydk::YLeaf cempmempoolhclowestfree; //type: uint64
        ydk::YLeaf cempmempoolusedlowwatermarkovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcusedlowwatermark; //type: uint64
        ydk::YLeaf cempmempoolsharedovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcshared; //type: uint64

}; // CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry


class CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable : public ydk::Entity
{
    public:
        CempMemBufferPoolTable();
        ~CempMemBufferPoolTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CempMemBufferPoolEntry; //type: CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry

        ydk::YList cempmembufferpoolentry;
        
}; // CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable


class CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry : public ydk::Entity
{
    public:
        CempMemBufferPoolEntry();
        ~CempMemBufferPoolEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cempmembufferpoolindex; //type: uint32
        ydk::YLeaf cempmembuffermempoolindex; //type: int32
        ydk::YLeaf cempmembuffername; //type: string
        ydk::YLeaf cempmembufferdynamic; //type: boolean
        ydk::YLeaf cempmembuffersize; //type: uint32
        ydk::YLeaf cempmembuffermin; //type: uint32
        ydk::YLeaf cempmembuffermax; //type: uint32
        ydk::YLeaf cempmembufferpermanent; //type: uint32
        ydk::YLeaf cempmembuffertransient; //type: uint32
        ydk::YLeaf cempmembuffertotal; //type: uint32
        ydk::YLeaf cempmembufferfree; //type: uint32
        ydk::YLeaf cempmembufferhit; //type: uint32
        ydk::YLeaf cempmembuffermiss; //type: uint32
        ydk::YLeaf cempmembufferfreehit; //type: uint32
        ydk::YLeaf cempmembufferfreemiss; //type: uint32
        ydk::YLeaf cempmembufferpermchange; //type: int32
        ydk::YLeaf cempmembufferpeak; //type: uint32
        ydk::YLeaf cempmembufferpeaktime; //type: uint32
        ydk::YLeaf cempmembuffertrim; //type: uint32
        ydk::YLeaf cempmembuffergrow; //type: uint32
        ydk::YLeaf cempmembufferfailures; //type: uint32
        ydk::YLeaf cempmembuffernostorage; //type: uint32

}; // CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry


class CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable : public ydk::Entity
{
    public:
        CempMemBufferCachePoolTable();
        ~CempMemBufferCachePoolTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CempMemBufferCachePoolEntry; //type: CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry

        ydk::YList cempmembuffercachepoolentry;
        
}; // CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable


class CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry : public ydk::Entity
{
    public:
        CempMemBufferCachePoolEntry();
        ~CempMemBufferCachePoolEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_ENHANCED_MEMPOOL_MIB::CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::cempmembufferpoolindex)
        ydk::YLeaf cempmembufferpoolindex;
        ydk::YLeaf cempmembuffercachesize; //type: uint32
        ydk::YLeaf cempmembuffercachetotal; //type: uint32
        ydk::YLeaf cempmembuffercacheused; //type: uint32
        ydk::YLeaf cempmembuffercachehit; //type: uint32
        ydk::YLeaf cempmembuffercachemiss; //type: uint32
        ydk::YLeaf cempmembuffercachethreshold; //type: uint32
        ydk::YLeaf cempmembuffercachethresholdcount; //type: uint32

}; // CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry

class CempMemPoolTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf processorMemory;
        static const ydk::Enum::YLeaf ioMemory;
        static const ydk::Enum::YLeaf pciMemory;
        static const ydk::Enum::YLeaf fastMemory;
        static const ydk::Enum::YLeaf multibusMemory;
        static const ydk::Enum::YLeaf interruptStackMemory;
        static const ydk::Enum::YLeaf processStackMemory;
        static const ydk::Enum::YLeaf localExceptionMemory;
        static const ydk::Enum::YLeaf virtualMemory;
        static const ydk::Enum::YLeaf reservedMemory;
        static const ydk::Enum::YLeaf imageMemory;
        static const ydk::Enum::YLeaf asicMemory;
        static const ydk::Enum::YLeaf posixMemory;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "processorMemory") return 2;
            if (name == "ioMemory") return 3;
            if (name == "pciMemory") return 4;
            if (name == "fastMemory") return 5;
            if (name == "multibusMemory") return 6;
            if (name == "interruptStackMemory") return 7;
            if (name == "processStackMemory") return 8;
            if (name == "localExceptionMemory") return 9;
            if (name == "virtualMemory") return 10;
            if (name == "reservedMemory") return 11;
            if (name == "imageMemory") return 12;
            if (name == "asicMemory") return 13;
            if (name == "posixMemory") return 14;
            return -1;
        }
};


}
}

#endif /* _CISCO_ENHANCED_MEMPOOL_MIB_ */

