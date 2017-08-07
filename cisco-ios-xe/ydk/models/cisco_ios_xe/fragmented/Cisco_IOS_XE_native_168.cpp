
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_168.hpp"
#include "Cisco_IOS_XE_native_169.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Otv::Isis::Overlay::Default_::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "default";
}

Native::Otv::Isis::Overlay::Default_::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default_::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Default_::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Skeptical' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default_::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "hostname"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Hostname::~Hostname()
{
}

bool Native::Otv::Isis::Overlay::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Otv::Isis::Overlay::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Otv::Isis::Overlay::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{
    yang_name = "log-adjacency-changes"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogAdjacencyChanges' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::LspGenInterval::LspGenInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{
    yang_name = "lsp-gen-interval"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::LspGenInterval::~LspGenInterval()
{
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::LspGenInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspGenInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::LspGenInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::LspGenInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    interval{YType::uint32, "interval"}
{
    yang_name = "nsf"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Nsf::~Nsf()
{
}

bool Native::Otv::Isis::Overlay::Nsf::has_data() const
{
    return cisco.is_set
	|| interval.is_set;
}

bool Native::Otv::Isis::Overlay::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::PrcInterval::PrcInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{
    yang_name = "prc-interval"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::PrcInterval::~PrcInterval()
{
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::PrcInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrcInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Skeptical::Skeptical()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Skeptical' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::SpfInterval::SpfInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{
    yang_name = "spf-interval"; yang_parent_name = "Overlay";
}

Native::Otv::Isis::Overlay::SpfInterval::~SpfInterval()
{
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Overlay::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Site::Site()
    :
    net{YType::str, "net"}
    	,
    default_(std::make_shared<Native::Otv::Isis::Site::Default_>())
	,log_adjacency_changes(nullptr) // presence node
	,skeptical(std::make_shared<Native::Otv::Isis::Site::Skeptical>())
{
    default_->parent = this;

    skeptical->parent = this;

    yang_name = "site"; yang_parent_name = "isis";
}

Native::Otv::Isis::Site::~Site()
{
}

bool Native::Otv::Isis::Site::has_data() const
{
    return net.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(net.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (net.is_set || is_set(net.yfilter)) leaf_name_data.push_back(net.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Isis::Site::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Otv::Isis::Site::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "net")
    {
        net = value;
        net.value_namespace = name_space;
        net.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "log-adjacency-changes" || name == "skeptical" || name == "net")
        return true;
    return false;
}

Native::Otv::Isis::Site::Default_::Default_()
    :
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    net{YType::empty, "net"}
    	,
    skeptical(std::make_shared<Native::Otv::Isis::Site::Default_::Skeptical>())
{
    skeptical->parent = this;

    yang_name = "default"; yang_parent_name = "site";
}

Native::Otv::Isis::Site::Default_::~Default_()
{
}

bool Native::Otv::Isis::Site::Default_::has_data() const
{
    return log_adjacency_changes.is_set
	|| net.is_set
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(net.yfilter)
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (net.is_set || is_set(net.yfilter)) leaf_name_data.push_back(net.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Default_::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Site::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net")
    {
        net = value;
        net.value_namespace = name_space;
        net.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "skeptical" || name == "log-adjacency-changes" || name == "net")
        return true;
    return false;
}

Native::Otv::Isis::Site::Default_::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "default";
}

Native::Otv::Isis::Site::Default_::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Site::Default_::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::Default_::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Default_::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Default_::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Site::Default_::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Default_::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Site::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{
    yang_name = "log-adjacency-changes"; yang_parent_name = "site";
}

Native::Otv::Isis::Site::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Otv::Isis::Site::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::LogAdjacencyChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Site::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Otv::Isis::Site::Skeptical::Skeptical()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "site";
}

Native::Otv::Isis::Site::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Site::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Site::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Site::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Otv::Isis::Site::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Site::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Site::Site()
    :
    bridge_domain{YType::uint16, "bridge-domain"}
    	,
    default_(std::make_shared<Native::Otv::Site::Default_>())
	,otv(std::make_shared<Native::Otv::Site::Otv_>())
{
    default_->parent = this;

    otv->parent = this;

    yang_name = "site"; yang_parent_name = "otv";
}

Native::Otv::Site::~Site()
{
}

bool Native::Otv::Site::has_data() const
{
    return bridge_domain.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (otv !=  nullptr && otv->has_data());
}

bool Native::Otv::Site::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (otv !=  nullptr && otv->has_operation());
}

std::string Native::Otv::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:site" <<"[bridge-domain='" <<bridge_domain <<"']";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain.is_set || is_set(bridge_domain.yfilter)) leaf_name_data.push_back(bridge_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Site::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv::Site::Otv_>();
        }
        return otv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    return children;
}

void Native::Otv::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain")
    {
        bridge_domain = value;
        bridge_domain.value_namespace = name_space;
        bridge_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain")
    {
        bridge_domain.yfilter = yfilter;
    }
}

bool Native::Otv::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "otv" || name == "bridge-domain")
        return true;
    return false;
}

Native::Otv::Site::Default_::Default_()
    :
    otv(std::make_shared<Native::Otv::Site::Default_::Otv_>())
{
    otv->parent = this;

    yang_name = "default"; yang_parent_name = "site";
}

Native::Otv::Site::Default_::~Default_()
{
}

bool Native::Otv::Site::Default_::has_data() const
{
    return (otv !=  nullptr && otv->has_data());
}

bool Native::Otv::Site::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (otv !=  nullptr && otv->has_operation());
}

std::string Native::Otv::Site::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv::Site::Default_::Otv_>();
        }
        return otv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    return children;
}

void Native::Otv::Site::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otv")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Otv_()
    :
    isis(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis>())
{
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "default";
}

Native::Otv::Site::Default_::Otv_::~Otv_()
{
}

bool Native::Otv::Site::Default_::Otv_::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::Site::Default_::Otv_::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::Site::Default_::Otv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Default_::Otv_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otv_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Otv::Site::Default_::Otv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default_::Otv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default_::Otv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::Isis()
    :
    bfd{YType::empty, "bfd"},
    hello_multiplier{YType::uint16, "hello-multiplier"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Authentication>())
	,hello(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Hello>())
	,hello_interval(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::HelloInterval>())
{
    authentication->parent = this;

    hello->parent = this;

    hello_interval->parent = this;

    yang_name = "isis"; yang_parent_name = "otv";
}

Native::Otv::Site::Default_::Otv_::Isis::~Isis()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::has_data() const
{
    return bfd.is_set
	|| hello_multiplier.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data());
}

bool Native::Otv::Site::Default_::Otv_::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation());
}

std::string Native::Otv::Site::Default_::Otv_::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Default_::Otv_::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hello" || name == "hello-interval" || name == "bfd" || name == "hello-multiplier" || name == "priority")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{
    yang_name = "authentication"; yang_parent_name = "isis";
}

Native::Otv::Site::Default_::Otv_::Isis::Authentication::~Authentication()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Site::Default_::Otv_::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{
    yang_name = "hello"; yang_parent_name = "isis";
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::~Hello()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Otv::Site::Default_::Otv_::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Default_::Otv_::Isis::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hello' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{
    yang_name = "padding"; yang_parent_name = "hello";
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::~Padding()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::HelloInterval()
    :
    minimal{YType::empty, "minimal"},
    value_{YType::uint16, "value"}
{
    yang_name = "hello-interval"; yang_parent_name = "isis";
}

Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::has_data() const
{
    return minimal.is_set
	|| value_.is_set;
}

bool Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimal.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimal.is_set || is_set(minimal.yfilter)) leaf_name_data.push_back(minimal.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimal")
    {
        minimal = value;
        minimal.value_namespace = name_space;
        minimal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimal")
    {
        minimal.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimal" || name == "value")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Otv_()
    :
    isis(std::make_shared<Native::Otv::Site::Otv_::Isis>())
{
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "site";
}

Native::Otv::Site::Otv_::~Otv_()
{
}

bool Native::Otv::Site::Otv_::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::Site::Otv_::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::Site::Otv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Otv_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otv_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Site::Otv_::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Otv::Site::Otv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Otv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Otv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Isis()
    :
    bfd{YType::empty, "bfd"},
    hello_multiplier{YType::uint16, "hello-multiplier"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Otv::Site::Otv_::Isis::Authentication>())
	,hello(std::make_shared<Native::Otv::Site::Otv_::Isis::Hello>())
	,hello_interval(std::make_shared<Native::Otv::Site::Otv_::Isis::HelloInterval>())
{
    authentication->parent = this;

    hello->parent = this;

    hello_interval->parent = this;

    yang_name = "isis"; yang_parent_name = "otv";
}

Native::Otv::Site::Otv_::Isis::~Isis()
{
}

bool Native::Otv::Site::Otv_::Isis::has_data() const
{
    return bfd.is_set
	|| hello_multiplier.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data());
}

bool Native::Otv::Site::Otv_::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation());
}

std::string Native::Otv::Site::Otv_::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Otv_::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Site::Otv_::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Otv::Site::Otv_::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Otv::Site::Otv_::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    return children;
}

void Native::Otv::Site::Otv_::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hello" || name == "hello-interval" || name == "bfd" || name == "hello-multiplier" || name == "priority")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{
    yang_name = "authentication"; yang_parent_name = "isis";
}

Native::Otv::Site::Otv_::Isis::Authentication::~Authentication()
{
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Otv_::Isis::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Otv_::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{
    yang_name = "hello"; yang_parent_name = "isis";
}

Native::Otv::Site::Otv_::Isis::Hello::~Hello()
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Otv::Site::Otv_::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Otv_::Isis::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hello' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Otv::Site::Otv_::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Otv::Site::Otv_::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Otv_::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{
    yang_name = "padding"; yang_parent_name = "hello";
}

Native::Otv::Site::Otv_::Isis::Hello::Padding::~Padding()
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Otv_::Isis::Hello::Padding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Otv_::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::HelloInterval::HelloInterval()
    :
    minimal{YType::empty, "minimal"},
    value_{YType::uint16, "value"}
{
    yang_name = "hello-interval"; yang_parent_name = "isis";
}

Native::Otv::Site::Otv_::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_data() const
{
    return minimal.is_set
	|| value_.is_set;
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimal.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Otv::Site::Otv_::Isis::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimal.is_set || is_set(minimal.yfilter)) leaf_name_data.push_back(minimal.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Otv_::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimal")
    {
        minimal = value;
        minimal.value_namespace = name_space;
        minimal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimal")
    {
        minimal.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimal" || name == "value")
        return true;
    return false;
}

Native::RemoteManagement::RemoteManagement()
    :
    dmi{YType::empty, "dmi"},
    restful_api{YType::boolean, "restful-api"}
{
    yang_name = "remote-management"; yang_parent_name = "native";
}

Native::RemoteManagement::~RemoteManagement()
{
}

bool Native::RemoteManagement::has_data() const
{
    return dmi.is_set
	|| restful_api.is_set;
}

bool Native::RemoteManagement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmi.yfilter)
	|| ydk::is_set(restful_api.yfilter);
}

std::string Native::RemoteManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-management";

    return path_buffer.str();

}

const EntityPath Native::RemoteManagement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmi.is_set || is_set(dmi.yfilter)) leaf_name_data.push_back(dmi.get_name_leafdata());
    if (restful_api.is_set || is_set(restful_api.yfilter)) leaf_name_data.push_back(restful_api.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RemoteManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RemoteManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RemoteManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmi")
    {
        dmi = value;
        dmi.value_namespace = name_space;
        dmi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restful-api")
    {
        restful_api = value;
        restful_api.value_namespace = name_space;
        restful_api.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RemoteManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmi")
    {
        dmi.yfilter = yfilter;
    }
    if(value_path == "restful-api")
    {
        restful_api.yfilter = yfilter;
    }
}

bool Native::RemoteManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmi" || name == "restful-api")
        return true;
    return false;
}

Native::VirtualService::VirtualService()
    :
    name{YType::str, "name"},
    activate{YType::empty, "Cisco-IOS-XE-vservice:activate"},
    profile{YType::str, "Cisco-IOS-XE-vservice:profile"}
    	,
    ip(std::make_shared<Native::VirtualService::Ip>())
	,vnic(std::make_shared<Native::VirtualService::Vnic>())
{
    ip->parent = this;

    vnic->parent = this;

    yang_name = "virtual-service"; yang_parent_name = "native";
}

Native::VirtualService::~VirtualService()
{
}

bool Native::VirtualService::has_data() const
{
    return name.is_set
	|| activate.is_set
	|| profile.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (vnic !=  nullptr && vnic->has_data());
}

bool Native::VirtualService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (vnic !=  nullptr && vnic->has_operation());
}

std::string Native::VirtualService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-service" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "vnic")
    {
        if(vnic == nullptr)
        {
            vnic = std::make_shared<Native::VirtualService::Vnic>();
        }
        return vnic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(vnic != nullptr)
    {
        children["vnic"] = vnic;
    }

    return children;
}

void Native::VirtualService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::VirtualService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "vnic" || name == "name" || name == "activate" || name == "profile")
        return true;
    return false;
}

Native::VirtualService::Ip::Ip()
    :
    shared(std::make_shared<Native::VirtualService::Ip::Shared>())
{
    shared->parent = this;

    yang_name = "ip"; yang_parent_name = "virtual-service";
}

Native::VirtualService::Ip::~Ip()
{
}

bool Native::VirtualService::Ip::has_data() const
{
    return (shared !=  nullptr && shared->has_data());
}

bool Native::VirtualService::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (shared !=  nullptr && shared->has_operation());
}

std::string Native::VirtualService::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vservice:ip";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shared")
    {
        if(shared == nullptr)
        {
            shared = std::make_shared<Native::VirtualService::Ip::Shared>();
        }
        return shared;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shared != nullptr)
    {
        children["shared"] = shared;
    }

    return children;
}

void Native::VirtualService::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared")
        return true;
    return false;
}

Native::VirtualService::Ip::Shared::Shared()
    :
    host_interface(std::make_shared<Native::VirtualService::Ip::Shared::HostInterface>())
{
    host_interface->parent = this;

    yang_name = "shared"; yang_parent_name = "ip";
}

Native::VirtualService::Ip::Shared::~Shared()
{
}

bool Native::VirtualService::Ip::Shared::has_data() const
{
    return (host_interface !=  nullptr && host_interface->has_data());
}

bool Native::VirtualService::Ip::Shared::has_operation() const
{
    return is_set(yfilter)
	|| (host_interface !=  nullptr && host_interface->has_operation());
}

std::string Native::VirtualService::Ip::Shared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Ip::Shared::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shared' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Ip::Shared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-interface")
    {
        if(host_interface == nullptr)
        {
            host_interface = std::make_shared<Native::VirtualService::Ip::Shared::HostInterface>();
        }
        return host_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Ip::Shared::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_interface != nullptr)
    {
        children["host-interface"] = host_interface;
    }

    return children;
}

void Native::VirtualService::Ip::Shared::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Ip::Shared::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Ip::Shared::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-interface")
        return true;
    return false;
}

Native::VirtualService::Ip::Shared::HostInterface::HostInterface()
    :
    fastethernet{YType::str, "FastEthernet"},
    loopback{YType::uint64, "Loopback"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "Vlan"}
{
    yang_name = "host-interface"; yang_parent_name = "shared";
}

Native::VirtualService::Ip::Shared::HostInterface::~HostInterface()
{
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_data() const
{
    return fastethernet.is_set
	|| loopback.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::VirtualService::Ip::Shared::HostInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-interface";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Ip::Shared::HostInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HostInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Ip::Shared::HostInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Ip::Shared::HostInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Ip::Shared::HostInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Ip::Shared::HostInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::VirtualService::Ip::Shared::HostInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "Loopback" || name == "TenGigabitEthernet" || name == "Vlan")
        return true;
    return false;
}

Native::VirtualService::Vnic::Vnic()
    :
    gateway(std::make_shared<Native::VirtualService::Vnic::Gateway>())
	,management(std::make_shared<Native::VirtualService::Vnic::Management>())
{
    gateway->parent = this;

    management->parent = this;

    yang_name = "vnic"; yang_parent_name = "virtual-service";
}

Native::VirtualService::Vnic::~Vnic()
{
}

bool Native::VirtualService::Vnic::has_data() const
{
    return (gateway !=  nullptr && gateway->has_data())
	|| (management !=  nullptr && management->has_data());
}

bool Native::VirtualService::Vnic::has_operation() const
{
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (management !=  nullptr && management->has_operation());
}

std::string Native::VirtualService::Vnic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vservice:vnic";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vnic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::VirtualService::Vnic::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "management")
    {
        if(management == nullptr)
        {
            management = std::make_shared<Native::VirtualService::Vnic::Management>();
        }
        return management;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    if(management != nullptr)
    {
        children["management"] = management;
    }

    return children;
}

void Native::VirtualService::Vnic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway" || name == "management")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::Gateway()
{
    yang_name = "gateway"; yang_parent_name = "vnic";
}

Native::VirtualService::Vnic::Gateway::~Gateway()
{
}

bool Native::VirtualService::Vnic::Gateway::has_data() const
{
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_data())
            return true;
    }
    return false;
}

bool Native::VirtualService::Vnic::Gateway::has_operation() const
{
    for (std::size_t index=0; index<virtualportgroup.size(); index++)
    {
        if(virtualportgroup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Gateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gateway' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VirtualPortGroup")
    {
        for(auto const & c : virtualportgroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::VirtualService::Vnic::Gateway::Virtualportgroup>();
        c->parent = this;
        virtualportgroup.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtualportgroup)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::VirtualService::Vnic::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VirtualPortGroup")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::Virtualportgroup()
    :
    number{YType::uint16, "number"}
    	,
    guest(std::make_shared<Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest>())
{
    guest->parent = this;

    yang_name = "VirtualPortGroup"; yang_parent_name = "gateway";
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::~Virtualportgroup()
{
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::has_data() const
{
    return number.is_set
	|| (guest !=  nullptr && guest->has_data());
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (guest !=  nullptr && guest->has_operation());
}

std::string Native::VirtualService::Vnic::Gateway::Virtualportgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VirtualPortGroup" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Gateway::Virtualportgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Virtualportgroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::Virtualportgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest")
    {
        if(guest == nullptr)
        {
            guest = std::make_shared<Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest>();
        }
        return guest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::Virtualportgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guest != nullptr)
    {
        children["guest"] = guest;
    }

    return children;
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guest" || name == "number")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Guest()
    :
    ip(std::make_shared<Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip>())
	,ipv6(std::make_shared<Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6>())
{
    ip->parent = this;

    ipv6->parent = this;

    yang_name = "guest"; yang_parent_name = "VirtualPortGroup";
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::~Guest()
{
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Guest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "guest";
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::~Ip()
{
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{
    yang_name = "ipv6"; yang_parent_name = "guest";
}

Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::~Ipv6()
{
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Management()
    :
    gigabitethernet0{YType::empty, "GigabitEthernet0"}
    	,
    guest(std::make_shared<Native::VirtualService::Vnic::Management::Guest>())
{
    guest->parent = this;

    yang_name = "management"; yang_parent_name = "vnic";
}

Native::VirtualService::Vnic::Management::~Management()
{
}

bool Native::VirtualService::Vnic::Management::has_data() const
{
    return gigabitethernet0.is_set
	|| (guest !=  nullptr && guest->has_data());
}

bool Native::VirtualService::Vnic::Management::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gigabitethernet0.yfilter)
	|| (guest !=  nullptr && guest->has_operation());
}

std::string Native::VirtualService::Vnic::Management::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "management";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Management::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Management' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gigabitethernet0.is_set || is_set(gigabitethernet0.yfilter)) leaf_name_data.push_back(gigabitethernet0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest")
    {
        if(guest == nullptr)
        {
            guest = std::make_shared<Native::VirtualService::Vnic::Management::Guest>();
        }
        return guest;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guest != nullptr)
    {
        children["guest"] = guest;
    }

    return children;
}

void Native::VirtualService::Vnic::Management::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "GigabitEthernet0")
    {
        gigabitethernet0 = value;
        gigabitethernet0.value_namespace = name_space;
        gigabitethernet0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "GigabitEthernet0")
    {
        gigabitethernet0.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guest" || name == "GigabitEthernet0")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Guest()
    :
    ip(std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ip>())
	,ipv6(std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ipv6>())
{
    ip->parent = this;

    ipv6->parent = this;

    yang_name = "guest"; yang_parent_name = "management";
}

Native::VirtualService::Vnic::Management::Guest::~Guest()
{
}

bool Native::VirtualService::Vnic::Management::Guest::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::VirtualService::Vnic::Management::Guest::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::VirtualService::Vnic::Management::Guest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Management::Guest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Guest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::Guest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::VirtualService::Vnic::Management::Guest::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::Guest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::VirtualService::Vnic::Management::Guest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::VirtualService::Vnic::Management::Guest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::VirtualService::Vnic::Management::Guest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "guest";
}

Native::VirtualService::Vnic::Management::Guest::Ip::~Ip()
{
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Management::Guest::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Management::Guest::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::Guest::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::Guest::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Management::Guest::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::Guest::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::Guest::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::VirtualService::Vnic::Management::Guest::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{
    yang_name = "ipv6"; yang_parent_name = "guest";
}

Native::VirtualService::Vnic::Management::Guest::Ipv6::~Ipv6()
{
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::VirtualService::Vnic::Management::Guest::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::VirtualService::Vnic::Management::Guest::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VirtualService::Vnic::Management::Guest::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VirtualService::Vnic::Management::Guest::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VirtualService::Vnic::Management::Guest::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VirtualService::Vnic::Management::Guest::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::VirtualService::Vnic::Management::Guest::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Snmp::Snmp()
    :
    ifmib(std::make_shared<Native::Snmp::Ifmib>())
	,mib(std::make_shared<Native::Snmp::Mib>())
{
    ifmib->parent = this;

    mib->parent = this;

    yang_name = "snmp"; yang_parent_name = "native";
}

Native::Snmp::~Snmp()
{
}

bool Native::Snmp::has_data() const
{
    return (ifmib !=  nullptr && ifmib->has_data())
	|| (mib !=  nullptr && mib->has_data());
}

bool Native::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifmib !=  nullptr && ifmib->has_operation())
	|| (mib !=  nullptr && mib->has_operation());
}

std::string Native::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifmib")
    {
        if(ifmib == nullptr)
        {
            ifmib = std::make_shared<Native::Snmp::Ifmib>();
        }
        return ifmib;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Native::Snmp::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifmib != nullptr)
    {
        children["ifmib"] = ifmib;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    return children;
}

void Native::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifmib" || name == "mib")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifmib()
    :
    ifalias(std::make_shared<Native::Snmp::Ifmib::Ifalias>())
	,ifindex(std::make_shared<Native::Snmp::Ifmib::Ifindex>())
{
    ifalias->parent = this;

    ifindex->parent = this;

    yang_name = "ifmib"; yang_parent_name = "snmp";
}

Native::Snmp::Ifmib::~Ifmib()
{
}

bool Native::Snmp::Ifmib::has_data() const
{
    return (ifalias !=  nullptr && ifalias->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Snmp::Ifmib::has_operation() const
{
    return is_set(yfilter)
	|| (ifalias !=  nullptr && ifalias->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Snmp::Ifmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ifmib";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Ifmib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Ifmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifalias")
    {
        if(ifalias == nullptr)
        {
            ifalias = std::make_shared<Native::Snmp::Ifmib::Ifalias>();
        }
        return ifalias;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Snmp::Ifmib::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Ifmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifalias != nullptr)
    {
        children["ifalias"] = ifalias;
    }

    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    return children;
}

void Native::Snmp::Ifmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Ifmib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Ifmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifalias" || name == "ifindex")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "ifmib";
}

Native::Snmp::Ifmib::Ifindex::~Ifindex()
{
}

bool Native::Snmp::Ifmib::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::Snmp::Ifmib::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Snmp::Ifmib::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Ifmib::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:ifmib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Ifmib::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Ifmib::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Ifmib::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Ifmib::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Snmp::Ifmib::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Snmp::Ifmib::Ifalias::Ifalias()
    :
    long_{YType::empty, "long"}
{
    yang_name = "ifalias"; yang_parent_name = "ifmib";
}

Native::Snmp::Ifmib::Ifalias::~Ifalias()
{
}

bool Native::Snmp::Ifmib::Ifalias::has_data() const
{
    return long_.is_set;
}

bool Native::Snmp::Ifmib::Ifalias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Snmp::Ifmib::Ifalias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifalias";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Ifmib::Ifalias::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:ifmib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Ifmib::Ifalias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Ifmib::Ifalias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Ifmib::Ifalias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Ifmib::Ifalias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Snmp::Ifmib::Ifalias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Snmp::Mib::Mib()
    :
    bulkstat(std::make_shared<Native::Snmp::Mib::Bulkstat>())
	,community_map(std::make_shared<Native::Snmp::Mib::CommunityMap>())
	,persist(nullptr) // presence node
{
    bulkstat->parent = this;

    community_map->parent = this;

    yang_name = "mib"; yang_parent_name = "snmp";
}

Native::Snmp::Mib::~Mib()
{
}

bool Native::Snmp::Mib::has_data() const
{
    return (bulkstat !=  nullptr && bulkstat->has_data())
	|| (community_map !=  nullptr && community_map->has_data())
	|| (persist !=  nullptr && persist->has_data());
}

bool Native::Snmp::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (bulkstat !=  nullptr && bulkstat->has_operation())
	|| (community_map !=  nullptr && community_map->has_operation())
	|| (persist !=  nullptr && persist->has_operation());
}

std::string Native::Snmp::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:mib";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulkstat")
    {
        if(bulkstat == nullptr)
        {
            bulkstat = std::make_shared<Native::Snmp::Mib::Bulkstat>();
        }
        return bulkstat;
    }

    if(child_yang_name == "community-map")
    {
        if(community_map == nullptr)
        {
            community_map = std::make_shared<Native::Snmp::Mib::CommunityMap>();
        }
        return community_map;
    }

    if(child_yang_name == "persist")
    {
        if(persist == nullptr)
        {
            persist = std::make_shared<Native::Snmp::Mib::Persist>();
        }
        return persist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bulkstat != nullptr)
    {
        children["bulkstat"] = bulkstat;
    }

    if(community_map != nullptr)
    {
        children["community-map"] = community_map;
    }

    if(persist != nullptr)
    {
        children["persist"] = persist;
    }

    return children;
}

void Native::Snmp::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulkstat" || name == "community-map" || name == "persist")
        return true;
    return false;
}

Native::Snmp::Mib::CommunityMap::CommunityMap()
{
    yang_name = "community-map"; yang_parent_name = "mib";
}

Native::Snmp::Mib::CommunityMap::~CommunityMap()
{
}

bool Native::Snmp::Mib::CommunityMap::has_data() const
{
    for (std::size_t index=0; index<community_map_list.size(); index++)
    {
        if(community_map_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Snmp::Mib::CommunityMap::has_operation() const
{
    for (std::size_t index=0; index<community_map_list.size(); index++)
    {
        if(community_map_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Snmp::Mib::CommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-map";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Mib::CommunityMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Mib::CommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-map-list")
    {
        for(auto const & c : community_map_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Snmp::Mib::CommunityMap::CommunityMapList>();
        c->parent = this;
        community_map_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::CommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_map_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Snmp::Mib::CommunityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::CommunityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::CommunityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-map-list")
        return true;
    return false;
}

Native::Snmp::Mib::CommunityMap::CommunityMapList::CommunityMapList()
    :
    name{YType::str, "name"},
    engineid{YType::str, "engineid"}
{
    yang_name = "community-map-list"; yang_parent_name = "community-map";
}

Native::Snmp::Mib::CommunityMap::CommunityMapList::~CommunityMapList()
{
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_data() const
{
    return name.is_set
	|| engineid.is_set;
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(engineid.yfilter);
}

std::string Native::Snmp::Mib::CommunityMap::CommunityMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-map-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Mib::CommunityMap::CommunityMapList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/community-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (engineid.is_set || is_set(engineid.yfilter)) leaf_name_data.push_back(engineid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Mib::CommunityMap::CommunityMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::CommunityMap::CommunityMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Mib::CommunityMap::CommunityMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engineid")
    {
        engineid = value;
        engineid.value_namespace = name_space;
        engineid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::CommunityMap::CommunityMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "engineid")
    {
        engineid.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::CommunityMap::CommunityMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "engineid")
        return true;
    return false;
}

Native::Snmp::Mib::Bulkstat::Bulkstat()
{
    yang_name = "bulkstat"; yang_parent_name = "mib";
}

Native::Snmp::Mib::Bulkstat::~Bulkstat()
{
}

bool Native::Snmp::Mib::Bulkstat::has_data() const
{
    for (std::size_t index=0; index<object_list.size(); index++)
    {
        if(object_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Snmp::Mib::Bulkstat::has_operation() const
{
    for (std::size_t index=0; index<object_list.size(); index++)
    {
        if(object_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Snmp::Mib::Bulkstat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulkstat";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Mib::Bulkstat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Mib::Bulkstat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-list")
    {
        for(auto const & c : object_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Snmp::Mib::Bulkstat::ObjectList>();
        c->parent = this;
        object_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::Bulkstat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : object_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Snmp::Mib::Bulkstat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Snmp::Mib::Bulkstat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Snmp::Mib::Bulkstat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-list")
        return true;
    return false;
}

Native::Snmp::Mib::Bulkstat::ObjectList::ObjectList()
    :
    name{YType::str, "name"}
{
    yang_name = "object-list"; yang_parent_name = "bulkstat";
}

Native::Snmp::Mib::Bulkstat::ObjectList::~ObjectList()
{
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_data() const
{
    return name.is_set;
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Snmp::Mib::Bulkstat::ObjectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Mib::Bulkstat::ObjectList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/bulkstat/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Mib::Bulkstat::ObjectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::Bulkstat::ObjectList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Mib::Bulkstat::ObjectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::Bulkstat::ObjectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::Bulkstat::ObjectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Snmp::Mib::Persist::Persist()
    :
    persist_enum{YType::enumeration, "persist-enum"}
{
    yang_name = "persist"; yang_parent_name = "mib";
}

Native::Snmp::Mib::Persist::~Persist()
{
}

bool Native::Snmp::Mib::Persist::has_data() const
{
    return persist_enum.is_set;
}

bool Native::Snmp::Mib::Persist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist_enum.yfilter);
}

std::string Native::Snmp::Mib::Persist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persist";

    return path_buffer.str();

}

const EntityPath Native::Snmp::Mib::Persist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp/Cisco-IOS-XE-snmp:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist_enum.is_set || is_set(persist_enum.yfilter)) leaf_name_data.push_back(persist_enum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Snmp::Mib::Persist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Snmp::Mib::Persist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Snmp::Mib::Persist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist-enum")
    {
        persist_enum = value;
        persist_enum.value_namespace = name_space;
        persist_enum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Snmp::Mib::Persist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist-enum")
    {
        persist_enum.yfilter = yfilter;
    }
}

bool Native::Snmp::Mib::Persist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist-enum")
        return true;
    return false;
}

Native::SnmpServer::SnmpServer()
    :
    chassis_id{YType::str, "Cisco-IOS-XE-snmp:chassis-id"},
    contact{YType::str, "Cisco-IOS-XE-snmp:contact"},
    location{YType::str, "Cisco-IOS-XE-snmp:location"},
    packetsize{YType::uint32, "Cisco-IOS-XE-snmp:packetsize"},
    queue_length{YType::uint16, "Cisco-IOS-XE-snmp:queue-length"},
    system_shutdown{YType::empty, "Cisco-IOS-XE-snmp:system-shutdown"},
    tftp_server_list{YType::str, "Cisco-IOS-XE-snmp:tftp-server-list"}
    	,
    enable(std::make_shared<Native::SnmpServer::Enable>())
	,engineid(std::make_shared<Native::SnmpServer::Engineid>())
	,ifindex(std::make_shared<Native::SnmpServer::Ifindex>())
	,ip(std::make_shared<Native::SnmpServer::Ip>())
	,manager(nullptr) // presence node
	,source_interface(std::make_shared<Native::SnmpServer::SourceInterface>())
	,trap(std::make_shared<Native::SnmpServer::Trap>())
	,trap_source(std::make_shared<Native::SnmpServer::TrapSource>())
	,user(std::make_shared<Native::SnmpServer::User>())
{
    enable->parent = this;

    engineid->parent = this;

    ifindex->parent = this;

    ip->parent = this;

    source_interface->parent = this;

    trap->parent = this;

    trap_source->parent = this;

    user->parent = this;

    yang_name = "snmp-server"; yang_parent_name = "native";
}

Native::SnmpServer::~SnmpServer()
{
}

bool Native::SnmpServer::has_data() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return chassis_id.is_set
	|| contact.is_set
	|| location.is_set
	|| packetsize.is_set
	|| queue_length.is_set
	|| system_shutdown.is_set
	|| tftp_server_list.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (engineid !=  nullptr && engineid->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (manager !=  nullptr && manager->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (trap !=  nullptr && trap->has_data())
	|| (trap_source !=  nullptr && trap_source->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::SnmpServer::has_operation() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<view.size(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(chassis_id.yfilter)
	|| ydk::is_set(contact.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(packetsize.yfilter)
	|| ydk::is_set(queue_length.yfilter)
	|| ydk::is_set(system_shutdown.yfilter)
	|| ydk::is_set(tftp_server_list.yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (engineid !=  nullptr && engineid->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (manager !=  nullptr && manager->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (trap !=  nullptr && trap->has_operation())
	|| (trap_source !=  nullptr && trap_source->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::SnmpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-server";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.yfilter)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (contact.is_set || is_set(contact.yfilter)) leaf_name_data.push_back(contact.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (packetsize.is_set || is_set(packetsize.yfilter)) leaf_name_data.push_back(packetsize.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());
    if (system_shutdown.is_set || is_set(system_shutdown.yfilter)) leaf_name_data.push_back(system_shutdown.get_name_leafdata());
    if (tftp_server_list.is_set || is_set(tftp_server_list.yfilter)) leaf_name_data.push_back(tftp_server_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::SnmpServer::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "engineID")
    {
        if(engineid == nullptr)
        {
            engineid = std::make_shared<Native::SnmpServer::Engineid>();
        }
        return engineid;
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::SnmpServer::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::SnmpServer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Native::SnmpServer::Manager>();
        }
        return manager;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::SnmpServer::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::SnmpServer::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "trap-source")
    {
        if(trap_source == nullptr)
        {
            trap_source = std::make_shared<Native::SnmpServer::TrapSource>();
        }
        return trap_source;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::SnmpServer::User>();
        }
        return user;
    }

    if(child_yang_name == "view")
    {
        for(auto const & c : view)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::View>();
        c->parent = this;
        view.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(engineid != nullptr)
    {
        children["engineID"] = engineid;
    }

    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(manager != nullptr)
    {
        children["manager"] = manager;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(trap_source != nullptr)
    {
        children["trap-source"] = trap_source;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    for (auto const & c : view)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SnmpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
        chassis_id.value_namespace = name_space;
        chassis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contact")
    {
        contact = value;
        contact.value_namespace = name_space;
        contact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetsize")
    {
        packetsize = value;
        packetsize.value_namespace = name_space;
        packetsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-shutdown")
    {
        system_shutdown = value;
        system_shutdown.value_namespace = name_space;
        system_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp-server-list")
    {
        tftp_server_list = value;
        tftp_server_list.value_namespace = name_space;
        tftp_server_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-id")
    {
        chassis_id.yfilter = yfilter;
    }
    if(value_path == "contact")
    {
        contact.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "packetsize")
    {
        packetsize.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
    if(value_path == "system-shutdown")
    {
        system_shutdown.yfilter = yfilter;
    }
    if(value_path == "tftp-server-list")
    {
        tftp_server_list.yfilter = yfilter;
    }
}

bool Native::SnmpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "context" || name == "enable" || name == "engineID" || name == "group" || name == "host" || name == "ifindex" || name == "ip" || name == "manager" || name == "source-interface" || name == "trap" || name == "trap-source" || name == "user" || name == "view" || name == "chassis-id" || name == "contact" || name == "location" || name == "packetsize" || name == "queue-length" || name == "system-shutdown" || name == "tftp-server-list")
        return true;
    return false;
}

Native::SnmpServer::Community::Community()
    :
    name{YType::str, "name"},
    access_list_name{YType::str, "access-list-name"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "RO"},
    rw{YType::empty, "RW"},
    view{YType::str, "view"}
{
    yang_name = "community"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Community::~Community()
{
}

bool Native::SnmpServer::Community::has_data() const
{
    return name.is_set
	|| access_list_name.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| view.is_set;
}

bool Native::SnmpServer::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter)
	|| ydk::is_set(view.yfilter);
}

std::string Native::SnmpServer::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:community" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (view.is_set || is_set(view.yfilter)) leaf_name_data.push_back(view.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RO")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RW")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view")
    {
        view = value;
        view.value_namespace = name_space;
        view.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "RO")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "RW")
    {
        rw.yfilter = yfilter;
    }
    if(value_path == "view")
    {
        view.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "access-list-name" || name == "ipv6" || name == "RO" || name == "RW" || name == "view")
        return true;
    return false;
}

Native::SnmpServer::Context::Context()
    :
    name{YType::str, "name"}
{
    yang_name = "context"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Context::~Context()
{
}

bool Native::SnmpServer::Context::has_data() const
{
    return name.is_set;
}

bool Native::SnmpServer::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::SnmpServer::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::SnmpServer::Enable::Enable()
    :
    enable_choice(std::make_shared<Native::SnmpServer::Enable::EnableChoice>())
{
    enable_choice->parent = this;

    yang_name = "enable"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Enable::~Enable()
{
}

bool Native::SnmpServer::Enable::has_data() const
{
    return (enable_choice !=  nullptr && enable_choice->has_data());
}

bool Native::SnmpServer::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (enable_choice !=  nullptr && enable_choice->has_operation());
}

std::string Native::SnmpServer::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:enable";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable-choice")
    {
        if(enable_choice == nullptr)
        {
            enable_choice = std::make_shared<Native::SnmpServer::Enable::EnableChoice>();
        }
        return enable_choice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable_choice != nullptr)
    {
        children["enable-choice"] = enable_choice;
    }

    return children;
}

void Native::SnmpServer::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-choice")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::EnableChoice()
    :
    informs{YType::empty, "informs"}
    	,
    traps(nullptr) // presence node
{
    yang_name = "enable-choice"; yang_parent_name = "enable";
}

Native::SnmpServer::Enable::EnableChoice::~EnableChoice()
{
}

bool Native::SnmpServer::Enable::EnableChoice::has_data() const
{
    return informs.is_set
	|| (traps !=  nullptr && traps->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(informs.yfilter)
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-choice";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (informs.is_set || is_set(informs.yfilter)) leaf_name_data.push_back(informs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traps")
    {
        if(traps == nullptr)
        {
            traps = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps>();
        }
        return traps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traps != nullptr)
    {
        children["traps"] = traps;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "informs")
    {
        informs = value;
        informs.value_namespace = name_space;
        informs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "informs")
    {
        informs.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traps" || name == "informs")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Traps()
    :
    aaa_server{YType::empty, "aaa_server"},
    authenticate_fail{YType::empty, "authenticate-fail"},
    bfd{YType::empty, "bfd"},
    bgp{YType::empty, "bgp"},
    bstun{YType::empty, "bstun"},
    c2900{YType::empty, "c2900"},
    casa{YType::empty, "casa"},
    ccme{YType::empty, "ccme"},
    channel{YType::empty, "channel"},
    chassis{YType::empty, "chassis"},
    cluster{YType::empty, "cluster"},
    cnpd{YType::empty, "cnpd"},
    config{YType::empty, "config"},
    config_copy{YType::empty, "config-copy"},
    config_ctid{YType::empty, "config-ctid"},
    copy_config{YType::empty, "copy-config"},
    cpu_threshold{YType::empty, "cpu_threshold"},
    deauthenticate{YType::empty, "deauthenticate"},
    dial{YType::empty, "dial"},
    director{YType::empty, "director"},
    disassociate{YType::empty, "disassociate"},
    dlsw{YType::empty, "dlsw"},
    dnis{YType::empty, "dnis"},
    dot11_qos{YType::empty, "dot11-qos"},
    ds0_busyout{YType::empty, "ds0-busyout"},
    ds1{YType::empty, "ds1"},
    ds1_loopback{YType::empty, "ds1-loopback"},
    ds3{YType::empty, "ds3"},
    eigrp{YType::empty, "eigrp"},
    entity_{YType::empty, "entity"},
    ether_oam{YType::empty, "ether-oam"},
    event_manager{YType::empty, "event-manager"},
    flowmon{YType::empty, "flowmon"},
    fru_ctrl{YType::empty, "fru-ctrl"},
    gatekeeper{YType::empty, "gatekeeper"},
    hsrp{YType::empty, "hsrp"},
    icsudsu{YType::empty, "icsudsu"},
    ima{YType::empty, "ima"},
    ipmobile{YType::empty, "ipmobile"},
    ipmulticast{YType::empty, "ipmulticast"},
    ipsla{YType::empty, "ipsla"},
    isis{YType::empty, "isis"},
    local_auth{YType::empty, "local-auth"},
    module{YType::empty, "module"},
    msdp{YType::empty, "msdp"},
    mvpn{YType::empty, "mvpn"},
    pppoe{YType::empty, "pppoe"},
    rep{YType::empty, "rep"},
    resource_policy{YType::empty, "resource-policy"},
    rf{YType::empty, "rf"},
    rogue_ap{YType::empty, "rogue-ap"},
    rsvp{YType::empty, "rsvp"},
    rtr{YType::empty, "rtr"},
    sonet{YType::empty, "sonet"},
    srp{YType::empty, "srp"},
    srst{YType::empty, "srst"},
    stun{YType::empty, "stun"},
    switch_over{YType::empty, "switch-over"},
    syslog{YType::empty, "syslog"},
    tty{YType::empty, "tty"},
    vlan_mac_limit{YType::empty, "vlan-mac-limit"},
    vlan_membership{YType::empty, "vlan-membership"},
    vlancreate{YType::empty, "vlancreate"},
    vlandelete{YType::empty, "vlandelete"},
    voice{YType::empty, "voice"},
    vrrp{YType::empty, "vrrp"},
    vsimaster{YType::empty, "vsimaster"},
    vtp{YType::empty, "vtp"},
    wlan_wep{YType::empty, "wlan-wep"},
    xgcp{YType::empty, "xgcp"}
    	,
    alarms(nullptr) // presence node
	,atm(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm>())
	,auth_framework(nullptr) // presence node
	,bgp_conf(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf>())
	,bridge(nullptr) // presence node
	,bulkstat(nullptr) // presence node
	,c6kxbar(nullptr) // presence node
	,call_home(nullptr) // presence node
	,cef(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cef>())
	,cpu(nullptr) // presence node
	,csg(nullptr) // presence node
	,dot1x(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X>())
	,dsp(nullptr) // presence node
	,energywise(nullptr) // presence node
	,entity_diag(nullptr) // presence node
	,envmon(nullptr) // presence node
	,errdisable(nullptr) // presence node
	,ethernet(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet>())
	,firewall(nullptr) // presence node
	,flash(nullptr) // presence node
	,flex_links(nullptr) // presence node
	,frame_relay(nullptr) // presence node
	,ike(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike>())
	,ipsec(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec>())
	,isakmp(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp>())
	,isdn(nullptr) // presence node
	,l2tc(nullptr) // presence node
	,l2tun(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun>())
	,license(nullptr) // presence node
	,mac_notification(nullptr) // presence node
	,mac_notification2(nullptr) // presence node
	,memory(nullptr) // presence node
	,mpls(nullptr) // presence node
	,nhrp(nullptr) // presence node
	,ospf(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf>())
	,ospfv3(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3>())
	,pim(nullptr) // presence node
	,plogd(nullptr) // presence node
	,port_security(nullptr) // presence node
	,power_ethernet(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet>())
	,pw(nullptr) // presence node
	,slb(nullptr) // presence node
	,snmp(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Snmp>())
	,stackwise(nullptr) // presence node
	,stpx(nullptr) // presence node
	,transceiver(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver>())
	,trustsec(nullptr) // presence node
	,trustsec_interface(nullptr) // presence node
	,trustsec_policy(nullptr) // presence node
	,trustsec_server(nullptr) // presence node
	,trustsec_sxp(nullptr) // presence node
	,udld(nullptr) // presence node
	,vrfmib(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib>())
	,vstack(nullptr) // presence node
	,vswitch(nullptr) // presence node
	,wireless(nullptr) // presence node
{
    atm->parent = this;

    bgp_conf->parent = this;

    cef->parent = this;

    dot1x->parent = this;

    ethernet->parent = this;

    ike->parent = this;

    ipsec->parent = this;

    isakmp->parent = this;

    l2tun->parent = this;

    ospf->parent = this;

    ospfv3->parent = this;

    power_ethernet->parent = this;

    snmp->parent = this;

    transceiver->parent = this;

    vrfmib->parent = this;

    yang_name = "traps"; yang_parent_name = "enable-choice";
}

Native::SnmpServer::Enable::EnableChoice::Traps::~Traps()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_data() const
{
    return aaa_server.is_set
	|| authenticate_fail.is_set
	|| bfd.is_set
	|| bgp.is_set
	|| bstun.is_set
	|| c2900.is_set
	|| casa.is_set
	|| ccme.is_set
	|| channel.is_set
	|| chassis.is_set
	|| cluster.is_set
	|| cnpd.is_set
	|| config.is_set
	|| config_copy.is_set
	|| config_ctid.is_set
	|| copy_config.is_set
	|| cpu_threshold.is_set
	|| deauthenticate.is_set
	|| dial.is_set
	|| director.is_set
	|| disassociate.is_set
	|| dlsw.is_set
	|| dnis.is_set
	|| dot11_qos.is_set
	|| ds0_busyout.is_set
	|| ds1.is_set
	|| ds1_loopback.is_set
	|| ds3.is_set
	|| eigrp.is_set
	|| entity_.is_set
	|| ether_oam.is_set
	|| event_manager.is_set
	|| flowmon.is_set
	|| fru_ctrl.is_set
	|| gatekeeper.is_set
	|| hsrp.is_set
	|| icsudsu.is_set
	|| ima.is_set
	|| ipmobile.is_set
	|| ipmulticast.is_set
	|| ipsla.is_set
	|| isis.is_set
	|| local_auth.is_set
	|| module.is_set
	|| msdp.is_set
	|| mvpn.is_set
	|| pppoe.is_set
	|| rep.is_set
	|| resource_policy.is_set
	|| rf.is_set
	|| rogue_ap.is_set
	|| rsvp.is_set
	|| rtr.is_set
	|| sonet.is_set
	|| srp.is_set
	|| srst.is_set
	|| stun.is_set
	|| switch_over.is_set
	|| syslog.is_set
	|| tty.is_set
	|| vlan_mac_limit.is_set
	|| vlan_membership.is_set
	|| vlancreate.is_set
	|| vlandelete.is_set
	|| voice.is_set
	|| vrrp.is_set
	|| vsimaster.is_set
	|| vtp.is_set
	|| wlan_wep.is_set
	|| xgcp.is_set
	|| (alarms !=  nullptr && alarms->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (auth_framework !=  nullptr && auth_framework->has_data())
	|| (bgp_conf !=  nullptr && bgp_conf->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (bulkstat !=  nullptr && bulkstat->has_data())
	|| (c6kxbar !=  nullptr && c6kxbar->has_data())
	|| (call_home !=  nullptr && call_home->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (cpu !=  nullptr && cpu->has_data())
	|| (csg !=  nullptr && csg->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (dsp !=  nullptr && dsp->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (entity_diag !=  nullptr && entity_diag->has_data())
	|| (envmon !=  nullptr && envmon->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (firewall !=  nullptr && firewall->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (flex_links !=  nullptr && flex_links->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (ike !=  nullptr && ike->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (isdn !=  nullptr && isdn->has_data())
	|| (l2tc !=  nullptr && l2tc->has_data())
	|| (l2tun !=  nullptr && l2tun->has_data())
	|| (license !=  nullptr && license->has_data())
	|| (mac_notification !=  nullptr && mac_notification->has_data())
	|| (mac_notification2 !=  nullptr && mac_notification2->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nhrp !=  nullptr && nhrp->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (plogd !=  nullptr && plogd->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (power_ethernet !=  nullptr && power_ethernet->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (slb !=  nullptr && slb->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (stackwise !=  nullptr && stackwise->has_data())
	|| (stpx !=  nullptr && stpx->has_data())
	|| (transceiver !=  nullptr && transceiver->has_data())
	|| (trustsec !=  nullptr && trustsec->has_data())
	|| (trustsec_interface !=  nullptr && trustsec_interface->has_data())
	|| (trustsec_policy !=  nullptr && trustsec_policy->has_data())
	|| (trustsec_server !=  nullptr && trustsec_server->has_data())
	|| (trustsec_sxp !=  nullptr && trustsec_sxp->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (vrfmib !=  nullptr && vrfmib->has_data())
	|| (vstack !=  nullptr && vstack->has_data())
	|| (vswitch !=  nullptr && vswitch->has_data())
	|| (wireless !=  nullptr && wireless->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_server.yfilter)
	|| ydk::is_set(authenticate_fail.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(bstun.yfilter)
	|| ydk::is_set(c2900.yfilter)
	|| ydk::is_set(casa.yfilter)
	|| ydk::is_set(ccme.yfilter)
	|| ydk::is_set(channel.yfilter)
	|| ydk::is_set(chassis.yfilter)
	|| ydk::is_set(cluster.yfilter)
	|| ydk::is_set(cnpd.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(config_copy.yfilter)
	|| ydk::is_set(config_ctid.yfilter)
	|| ydk::is_set(copy_config.yfilter)
	|| ydk::is_set(cpu_threshold.yfilter)
	|| ydk::is_set(deauthenticate.yfilter)
	|| ydk::is_set(dial.yfilter)
	|| ydk::is_set(director.yfilter)
	|| ydk::is_set(disassociate.yfilter)
	|| ydk::is_set(dlsw.yfilter)
	|| ydk::is_set(dnis.yfilter)
	|| ydk::is_set(dot11_qos.yfilter)
	|| ydk::is_set(ds0_busyout.yfilter)
	|| ydk::is_set(ds1.yfilter)
	|| ydk::is_set(ds1_loopback.yfilter)
	|| ydk::is_set(ds3.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(entity_.yfilter)
	|| ydk::is_set(ether_oam.yfilter)
	|| ydk::is_set(event_manager.yfilter)
	|| ydk::is_set(flowmon.yfilter)
	|| ydk::is_set(fru_ctrl.yfilter)
	|| ydk::is_set(gatekeeper.yfilter)
	|| ydk::is_set(hsrp.yfilter)
	|| ydk::is_set(icsudsu.yfilter)
	|| ydk::is_set(ima.yfilter)
	|| ydk::is_set(ipmobile.yfilter)
	|| ydk::is_set(ipmulticast.yfilter)
	|| ydk::is_set(ipsla.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(local_auth.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(msdp.yfilter)
	|| ydk::is_set(mvpn.yfilter)
	|| ydk::is_set(pppoe.yfilter)
	|| ydk::is_set(rep.yfilter)
	|| ydk::is_set(resource_policy.yfilter)
	|| ydk::is_set(rf.yfilter)
	|| ydk::is_set(rogue_ap.yfilter)
	|| ydk::is_set(rsvp.yfilter)
	|| ydk::is_set(rtr.yfilter)
	|| ydk::is_set(sonet.yfilter)
	|| ydk::is_set(srp.yfilter)
	|| ydk::is_set(srst.yfilter)
	|| ydk::is_set(stun.yfilter)
	|| ydk::is_set(switch_over.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(tty.yfilter)
	|| ydk::is_set(vlan_mac_limit.yfilter)
	|| ydk::is_set(vlan_membership.yfilter)
	|| ydk::is_set(vlancreate.yfilter)
	|| ydk::is_set(vlandelete.yfilter)
	|| ydk::is_set(voice.yfilter)
	|| ydk::is_set(vrrp.yfilter)
	|| ydk::is_set(vsimaster.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| ydk::is_set(wlan_wep.yfilter)
	|| ydk::is_set(xgcp.yfilter)
	|| (alarms !=  nullptr && alarms->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (auth_framework !=  nullptr && auth_framework->has_operation())
	|| (bgp_conf !=  nullptr && bgp_conf->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (bulkstat !=  nullptr && bulkstat->has_operation())
	|| (c6kxbar !=  nullptr && c6kxbar->has_operation())
	|| (call_home !=  nullptr && call_home->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (csg !=  nullptr && csg->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (dsp !=  nullptr && dsp->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (entity_diag !=  nullptr && entity_diag->has_operation())
	|| (envmon !=  nullptr && envmon->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (firewall !=  nullptr && firewall->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (flex_links !=  nullptr && flex_links->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (ike !=  nullptr && ike->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (isdn !=  nullptr && isdn->has_operation())
	|| (l2tc !=  nullptr && l2tc->has_operation())
	|| (l2tun !=  nullptr && l2tun->has_operation())
	|| (license !=  nullptr && license->has_operation())
	|| (mac_notification !=  nullptr && mac_notification->has_operation())
	|| (mac_notification2 !=  nullptr && mac_notification2->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nhrp !=  nullptr && nhrp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (plogd !=  nullptr && plogd->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (power_ethernet !=  nullptr && power_ethernet->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (slb !=  nullptr && slb->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (stackwise !=  nullptr && stackwise->has_operation())
	|| (stpx !=  nullptr && stpx->has_operation())
	|| (transceiver !=  nullptr && transceiver->has_operation())
	|| (trustsec !=  nullptr && trustsec->has_operation())
	|| (trustsec_interface !=  nullptr && trustsec_interface->has_operation())
	|| (trustsec_policy !=  nullptr && trustsec_policy->has_operation())
	|| (trustsec_server !=  nullptr && trustsec_server->has_operation())
	|| (trustsec_sxp !=  nullptr && trustsec_sxp->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (vrfmib !=  nullptr && vrfmib->has_operation())
	|| (vstack !=  nullptr && vstack->has_operation())
	|| (vswitch !=  nullptr && vswitch->has_operation())
	|| (wireless !=  nullptr && wireless->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_server.is_set || is_set(aaa_server.yfilter)) leaf_name_data.push_back(aaa_server.get_name_leafdata());
    if (authenticate_fail.is_set || is_set(authenticate_fail.yfilter)) leaf_name_data.push_back(authenticate_fail.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (bstun.is_set || is_set(bstun.yfilter)) leaf_name_data.push_back(bstun.get_name_leafdata());
    if (c2900.is_set || is_set(c2900.yfilter)) leaf_name_data.push_back(c2900.get_name_leafdata());
    if (casa.is_set || is_set(casa.yfilter)) leaf_name_data.push_back(casa.get_name_leafdata());
    if (ccme.is_set || is_set(ccme.yfilter)) leaf_name_data.push_back(ccme.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (chassis.is_set || is_set(chassis.yfilter)) leaf_name_data.push_back(chassis.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.yfilter)) leaf_name_data.push_back(cluster.get_name_leafdata());
    if (cnpd.is_set || is_set(cnpd.yfilter)) leaf_name_data.push_back(cnpd.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (config_copy.is_set || is_set(config_copy.yfilter)) leaf_name_data.push_back(config_copy.get_name_leafdata());
    if (config_ctid.is_set || is_set(config_ctid.yfilter)) leaf_name_data.push_back(config_ctid.get_name_leafdata());
    if (copy_config.is_set || is_set(copy_config.yfilter)) leaf_name_data.push_back(copy_config.get_name_leafdata());
    if (cpu_threshold.is_set || is_set(cpu_threshold.yfilter)) leaf_name_data.push_back(cpu_threshold.get_name_leafdata());
    if (deauthenticate.is_set || is_set(deauthenticate.yfilter)) leaf_name_data.push_back(deauthenticate.get_name_leafdata());
    if (dial.is_set || is_set(dial.yfilter)) leaf_name_data.push_back(dial.get_name_leafdata());
    if (director.is_set || is_set(director.yfilter)) leaf_name_data.push_back(director.get_name_leafdata());
    if (disassociate.is_set || is_set(disassociate.yfilter)) leaf_name_data.push_back(disassociate.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.yfilter)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (dnis.is_set || is_set(dnis.yfilter)) leaf_name_data.push_back(dnis.get_name_leafdata());
    if (dot11_qos.is_set || is_set(dot11_qos.yfilter)) leaf_name_data.push_back(dot11_qos.get_name_leafdata());
    if (ds0_busyout.is_set || is_set(ds0_busyout.yfilter)) leaf_name_data.push_back(ds0_busyout.get_name_leafdata());
    if (ds1.is_set || is_set(ds1.yfilter)) leaf_name_data.push_back(ds1.get_name_leafdata());
    if (ds1_loopback.is_set || is_set(ds1_loopback.yfilter)) leaf_name_data.push_back(ds1_loopback.get_name_leafdata());
    if (ds3.is_set || is_set(ds3.yfilter)) leaf_name_data.push_back(ds3.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (entity_.is_set || is_set(entity_.yfilter)) leaf_name_data.push_back(entity_.get_name_leafdata());
    if (ether_oam.is_set || is_set(ether_oam.yfilter)) leaf_name_data.push_back(ether_oam.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.yfilter)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (flowmon.is_set || is_set(flowmon.yfilter)) leaf_name_data.push_back(flowmon.get_name_leafdata());
    if (fru_ctrl.is_set || is_set(fru_ctrl.yfilter)) leaf_name_data.push_back(fru_ctrl.get_name_leafdata());
    if (gatekeeper.is_set || is_set(gatekeeper.yfilter)) leaf_name_data.push_back(gatekeeper.get_name_leafdata());
    if (hsrp.is_set || is_set(hsrp.yfilter)) leaf_name_data.push_back(hsrp.get_name_leafdata());
    if (icsudsu.is_set || is_set(icsudsu.yfilter)) leaf_name_data.push_back(icsudsu.get_name_leafdata());
    if (ima.is_set || is_set(ima.yfilter)) leaf_name_data.push_back(ima.get_name_leafdata());
    if (ipmobile.is_set || is_set(ipmobile.yfilter)) leaf_name_data.push_back(ipmobile.get_name_leafdata());
    if (ipmulticast.is_set || is_set(ipmulticast.yfilter)) leaf_name_data.push_back(ipmulticast.get_name_leafdata());
    if (ipsla.is_set || is_set(ipsla.yfilter)) leaf_name_data.push_back(ipsla.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (local_auth.is_set || is_set(local_auth.yfilter)) leaf_name_data.push_back(local_auth.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (msdp.is_set || is_set(msdp.yfilter)) leaf_name_data.push_back(msdp.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.yfilter)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.yfilter)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (rep.is_set || is_set(rep.yfilter)) leaf_name_data.push_back(rep.get_name_leafdata());
    if (resource_policy.is_set || is_set(resource_policy.yfilter)) leaf_name_data.push_back(resource_policy.get_name_leafdata());
    if (rf.is_set || is_set(rf.yfilter)) leaf_name_data.push_back(rf.get_name_leafdata());
    if (rogue_ap.is_set || is_set(rogue_ap.yfilter)) leaf_name_data.push_back(rogue_ap.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.yfilter)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());
    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());
    if (srp.is_set || is_set(srp.yfilter)) leaf_name_data.push_back(srp.get_name_leafdata());
    if (srst.is_set || is_set(srst.yfilter)) leaf_name_data.push_back(srst.get_name_leafdata());
    if (stun.is_set || is_set(stun.yfilter)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (switch_over.is_set || is_set(switch_over.yfilter)) leaf_name_data.push_back(switch_over.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (tty.is_set || is_set(tty.yfilter)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (vlan_mac_limit.is_set || is_set(vlan_mac_limit.yfilter)) leaf_name_data.push_back(vlan_mac_limit.get_name_leafdata());
    if (vlan_membership.is_set || is_set(vlan_membership.yfilter)) leaf_name_data.push_back(vlan_membership.get_name_leafdata());
    if (vlancreate.is_set || is_set(vlancreate.yfilter)) leaf_name_data.push_back(vlancreate.get_name_leafdata());
    if (vlandelete.is_set || is_set(vlandelete.yfilter)) leaf_name_data.push_back(vlandelete.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());
    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());
    if (vsimaster.is_set || is_set(vsimaster.yfilter)) leaf_name_data.push_back(vsimaster.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());
    if (wlan_wep.is_set || is_set(wlan_wep.yfilter)) leaf_name_data.push_back(wlan_wep.get_name_leafdata());
    if (xgcp.is_set || is_set(xgcp.yfilter)) leaf_name_data.push_back(xgcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarms")
    {
        if(alarms == nullptr)
        {
            alarms = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Alarms>();
        }
        return alarms;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "auth-framework")
    {
        if(auth_framework == nullptr)
        {
            auth_framework = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework>();
        }
        return auth_framework;
    }

    if(child_yang_name == "bgp-conf")
    {
        if(bgp_conf == nullptr)
        {
            bgp_conf = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf>();
        }
        return bgp_conf;
    }

    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "bulkstat")
    {
        if(bulkstat == nullptr)
        {
            bulkstat = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat>();
        }
        return bulkstat;
    }

    if(child_yang_name == "c6kxbar")
    {
        if(c6kxbar == nullptr)
        {
            c6kxbar = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar>();
        }
        return c6kxbar;
    }

    if(child_yang_name == "call-home")
    {
        if(call_home == nullptr)
        {
            call_home = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::CallHome>();
        }
        return call_home;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "csg")
    {
        if(csg == nullptr)
        {
            csg = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Csg>();
        }
        return csg;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "dsp")
    {
        if(dsp == nullptr)
        {
            dsp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Dsp>();
        }
        return dsp;
    }

    if(child_yang_name == "energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "entity-diag")
    {
        if(entity_diag == nullptr)
        {
            entity_diag = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag>();
        }
        return entity_diag;
    }

    if(child_yang_name == "envmon")
    {
        if(envmon == nullptr)
        {
            envmon = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Envmon>();
        }
        return envmon;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Firewall>();
        }
        return firewall;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "flex-links")
    {
        if(flex_links == nullptr)
        {
            flex_links = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks>();
        }
        return flex_links;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "ike")
    {
        if(ike == nullptr)
        {
            ike = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike>();
        }
        return ike;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "isdn")
    {
        if(isdn == nullptr)
        {
            isdn = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isdn>();
        }
        return isdn;
    }

    if(child_yang_name == "l2tc")
    {
        if(l2tc == nullptr)
        {
            l2tc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc>();
        }
        return l2tc;
    }

    if(child_yang_name == "l2tun")
    {
        if(l2tun == nullptr)
        {
            l2tun = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun>();
        }
        return l2tun;
    }

    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::License>();
        }
        return license;
    }

    if(child_yang_name == "mac-notification")
    {
        if(mac_notification == nullptr)
        {
            mac_notification = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification>();
        }
        return mac_notification;
    }

    if(child_yang_name == "mac-notification2")
    {
        if(mac_notification2 == nullptr)
        {
            mac_notification2 = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2>();
        }
        return mac_notification2;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "nhrp")
    {
        if(nhrp == nullptr)
        {
            nhrp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp>();
        }
        return nhrp;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "plogd")
    {
        if(plogd == nullptr)
        {
            plogd = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Plogd>();
        }
        return plogd;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "power-ethernet")
    {
        if(power_ethernet == nullptr)
        {
            power_ethernet = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet>();
        }
        return power_ethernet;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "slb")
    {
        if(slb == nullptr)
        {
            slb = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Slb>();
        }
        return slb;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "stackwise")
    {
        if(stackwise == nullptr)
        {
            stackwise = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise>();
        }
        return stackwise;
    }

    if(child_yang_name == "stpx")
    {
        if(stpx == nullptr)
        {
            stpx = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Stpx>();
        }
        return stpx;
    }

    if(child_yang_name == "transceiver")
    {
        if(transceiver == nullptr)
        {
            transceiver = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver>();
        }
        return transceiver;
    }

    if(child_yang_name == "trustsec")
    {
        if(trustsec == nullptr)
        {
            trustsec = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec>();
        }
        return trustsec;
    }

    if(child_yang_name == "trustsec-interface")
    {
        if(trustsec_interface == nullptr)
        {
            trustsec_interface = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface>();
        }
        return trustsec_interface;
    }

    if(child_yang_name == "trustsec-policy")
    {
        if(trustsec_policy == nullptr)
        {
            trustsec_policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy>();
        }
        return trustsec_policy;
    }

    if(child_yang_name == "trustsec-server")
    {
        if(trustsec_server == nullptr)
        {
            trustsec_server = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer>();
        }
        return trustsec_server;
    }

    if(child_yang_name == "trustsec-sxp")
    {
        if(trustsec_sxp == nullptr)
        {
            trustsec_sxp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp>();
        }
        return trustsec_sxp;
    }

    if(child_yang_name == "udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "vrfmib")
    {
        if(vrfmib == nullptr)
        {
            vrfmib = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib>();
        }
        return vrfmib;
    }

    if(child_yang_name == "vstack")
    {
        if(vstack == nullptr)
        {
            vstack = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vstack>();
        }
        return vstack;
    }

    if(child_yang_name == "vswitch")
    {
        if(vswitch == nullptr)
        {
            vswitch = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch>();
        }
        return vswitch;
    }

    if(child_yang_name == "wireless")
    {
        if(wireless == nullptr)
        {
            wireless = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless>();
        }
        return wireless;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarms != nullptr)
    {
        children["alarms"] = alarms;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(auth_framework != nullptr)
    {
        children["auth-framework"] = auth_framework;
    }

    if(bgp_conf != nullptr)
    {
        children["bgp-conf"] = bgp_conf;
    }

    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(bulkstat != nullptr)
    {
        children["bulkstat"] = bulkstat;
    }

    if(c6kxbar != nullptr)
    {
        children["c6kxbar"] = c6kxbar;
    }

    if(call_home != nullptr)
    {
        children["call-home"] = call_home;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    if(csg != nullptr)
    {
        children["csg"] = csg;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(dsp != nullptr)
    {
        children["dsp"] = dsp;
    }

    if(energywise != nullptr)
    {
        children["energywise"] = energywise;
    }

    if(entity_diag != nullptr)
    {
        children["entity-diag"] = entity_diag;
    }

    if(envmon != nullptr)
    {
        children["envmon"] = envmon;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(firewall != nullptr)
    {
        children["firewall"] = firewall;
    }

    if(flash != nullptr)
    {
        children["flash"] = flash;
    }

    if(flex_links != nullptr)
    {
        children["flex-links"] = flex_links;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(ike != nullptr)
    {
        children["ike"] = ike;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(isdn != nullptr)
    {
        children["isdn"] = isdn;
    }

    if(l2tc != nullptr)
    {
        children["l2tc"] = l2tc;
    }

    if(l2tun != nullptr)
    {
        children["l2tun"] = l2tun;
    }

    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(mac_notification != nullptr)
    {
        children["mac-notification"] = mac_notification;
    }

    if(mac_notification2 != nullptr)
    {
        children["mac-notification2"] = mac_notification2;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(nhrp != nullptr)
    {
        children["nhrp"] = nhrp;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(plogd != nullptr)
    {
        children["plogd"] = plogd;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(power_ethernet != nullptr)
    {
        children["power-ethernet"] = power_ethernet;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(slb != nullptr)
    {
        children["slb"] = slb;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(stackwise != nullptr)
    {
        children["stackwise"] = stackwise;
    }

    if(stpx != nullptr)
    {
        children["stpx"] = stpx;
    }

    if(transceiver != nullptr)
    {
        children["transceiver"] = transceiver;
    }

    if(trustsec != nullptr)
    {
        children["trustsec"] = trustsec;
    }

    if(trustsec_interface != nullptr)
    {
        children["trustsec-interface"] = trustsec_interface;
    }

    if(trustsec_policy != nullptr)
    {
        children["trustsec-policy"] = trustsec_policy;
    }

    if(trustsec_server != nullptr)
    {
        children["trustsec-server"] = trustsec_server;
    }

    if(trustsec_sxp != nullptr)
    {
        children["trustsec-sxp"] = trustsec_sxp;
    }

    if(udld != nullptr)
    {
        children["udld"] = udld;
    }

    if(vrfmib != nullptr)
    {
        children["vrfmib"] = vrfmib;
    }

    if(vstack != nullptr)
    {
        children["vstack"] = vstack;
    }

    if(vswitch != nullptr)
    {
        children["vswitch"] = vswitch;
    }

    if(wireless != nullptr)
    {
        children["wireless"] = wireless;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa_server")
    {
        aaa_server = value;
        aaa_server.value_namespace = name_space;
        aaa_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authenticate-fail")
    {
        authenticate_fail = value;
        authenticate_fail.value_namespace = name_space;
        authenticate_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstun")
    {
        bstun = value;
        bstun.value_namespace = name_space;
        bstun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "c2900")
    {
        c2900 = value;
        c2900.value_namespace = name_space;
        c2900.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casa")
    {
        casa = value;
        casa.value_namespace = name_space;
        casa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccme")
    {
        ccme = value;
        ccme.value_namespace = name_space;
        ccme.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis")
    {
        chassis = value;
        chassis.value_namespace = name_space;
        chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster")
    {
        cluster = value;
        cluster.value_namespace = name_space;
        cluster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpd")
    {
        cnpd = value;
        cnpd.value_namespace = name_space;
        cnpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-copy")
    {
        config_copy = value;
        config_copy.value_namespace = name_space;
        config_copy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-ctid")
    {
        config_ctid = value;
        config_ctid.value_namespace = name_space;
        config_ctid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copy-config")
    {
        copy_config = value;
        copy_config.value_namespace = name_space;
        copy_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu_threshold")
    {
        cpu_threshold = value;
        cpu_threshold.value_namespace = name_space;
        cpu_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deauthenticate")
    {
        deauthenticate = value;
        deauthenticate.value_namespace = name_space;
        deauthenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dial")
    {
        dial = value;
        dial.value_namespace = name_space;
        dial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "director")
    {
        director = value;
        director.value_namespace = name_space;
        director.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disassociate")
    {
        disassociate = value;
        disassociate.value_namespace = name_space;
        disassociate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
        dlsw.value_namespace = name_space;
        dlsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnis")
    {
        dnis = value;
        dnis.value_namespace = name_space;
        dnis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot11-qos")
    {
        dot11_qos = value;
        dot11_qos.value_namespace = name_space;
        dot11_qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds0-busyout")
    {
        ds0_busyout = value;
        ds0_busyout.value_namespace = name_space;
        ds0_busyout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1")
    {
        ds1 = value;
        ds1.value_namespace = name_space;
        ds1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1-loopback")
    {
        ds1_loopback = value;
        ds1_loopback.value_namespace = name_space;
        ds1_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds3")
    {
        ds3 = value;
        ds3.value_namespace = name_space;
        ds3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity")
    {
        entity_ = value;
        entity_.value_namespace = name_space;
        entity_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-oam")
    {
        ether_oam = value;
        ether_oam.value_namespace = name_space;
        ether_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
        event_manager.value_namespace = name_space;
        event_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowmon")
    {
        flowmon = value;
        flowmon.value_namespace = name_space;
        flowmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl = value;
        fru_ctrl.value_namespace = name_space;
        fru_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gatekeeper")
    {
        gatekeeper = value;
        gatekeeper.value_namespace = name_space;
        gatekeeper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp")
    {
        hsrp = value;
        hsrp.value_namespace = name_space;
        hsrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icsudsu")
    {
        icsudsu = value;
        icsudsu.value_namespace = name_space;
        icsudsu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima")
    {
        ima = value;
        ima.value_namespace = name_space;
        ima.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmobile")
    {
        ipmobile = value;
        ipmobile.value_namespace = name_space;
        ipmobile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast = value;
        ipmulticast.value_namespace = name_space;
        ipmulticast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsla")
    {
        ipsla = value;
        ipsla.value_namespace = name_space;
        ipsla.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-auth")
    {
        local_auth = value;
        local_auth.value_namespace = name_space;
        local_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdp")
    {
        msdp = value;
        msdp.value_namespace = name_space;
        msdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
        mvpn.value_namespace = name_space;
        mvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
        pppoe.value_namespace = name_space;
        pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rep")
    {
        rep = value;
        rep.value_namespace = name_space;
        rep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-policy")
    {
        resource_policy = value;
        resource_policy.value_namespace = name_space;
        resource_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rf")
    {
        rf = value;
        rf.value_namespace = name_space;
        rf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rogue-ap")
    {
        rogue_ap = value;
        rogue_ap.value_namespace = name_space;
        rogue_ap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
        rsvp.value_namespace = name_space;
        rsvp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp")
    {
        srp = value;
        srp.value_namespace = name_space;
        srp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srst")
    {
        srst = value;
        srst.value_namespace = name_space;
        srst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stun")
    {
        stun = value;
        stun.value_namespace = name_space;
        stun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-over")
    {
        switch_over = value;
        switch_over.value_namespace = name_space;
        switch_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tty")
    {
        tty = value;
        tty.value_namespace = name_space;
        tty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-mac-limit")
    {
        vlan_mac_limit = value;
        vlan_mac_limit.value_namespace = name_space;
        vlan_mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-membership")
    {
        vlan_membership = value;
        vlan_membership.value_namespace = name_space;
        vlan_membership.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlancreate")
    {
        vlancreate = value;
        vlancreate.value_namespace = name_space;
        vlancreate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlandelete")
    {
        vlandelete = value;
        vlandelete.value_namespace = name_space;
        vlandelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsimaster")
    {
        vsimaster = value;
        vsimaster.value_namespace = name_space;
        vsimaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlan-wep")
    {
        wlan_wep = value;
        wlan_wep.value_namespace = name_space;
        wlan_wep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgcp")
    {
        xgcp = value;
        xgcp.value_namespace = name_space;
        xgcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa_server")
    {
        aaa_server.yfilter = yfilter;
    }
    if(value_path == "authenticate-fail")
    {
        authenticate_fail.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "bstun")
    {
        bstun.yfilter = yfilter;
    }
    if(value_path == "c2900")
    {
        c2900.yfilter = yfilter;
    }
    if(value_path == "casa")
    {
        casa.yfilter = yfilter;
    }
    if(value_path == "ccme")
    {
        ccme.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
    if(value_path == "chassis")
    {
        chassis.yfilter = yfilter;
    }
    if(value_path == "cluster")
    {
        cluster.yfilter = yfilter;
    }
    if(value_path == "cnpd")
    {
        cnpd.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "config-copy")
    {
        config_copy.yfilter = yfilter;
    }
    if(value_path == "config-ctid")
    {
        config_ctid.yfilter = yfilter;
    }
    if(value_path == "copy-config")
    {
        copy_config.yfilter = yfilter;
    }
    if(value_path == "cpu_threshold")
    {
        cpu_threshold.yfilter = yfilter;
    }
    if(value_path == "deauthenticate")
    {
        deauthenticate.yfilter = yfilter;
    }
    if(value_path == "dial")
    {
        dial.yfilter = yfilter;
    }
    if(value_path == "director")
    {
        director.yfilter = yfilter;
    }
    if(value_path == "disassociate")
    {
        disassociate.yfilter = yfilter;
    }
    if(value_path == "dlsw")
    {
        dlsw.yfilter = yfilter;
    }
    if(value_path == "dnis")
    {
        dnis.yfilter = yfilter;
    }
    if(value_path == "dot11-qos")
    {
        dot11_qos.yfilter = yfilter;
    }
    if(value_path == "ds0-busyout")
    {
        ds0_busyout.yfilter = yfilter;
    }
    if(value_path == "ds1")
    {
        ds1.yfilter = yfilter;
    }
    if(value_path == "ds1-loopback")
    {
        ds1_loopback.yfilter = yfilter;
    }
    if(value_path == "ds3")
    {
        ds3.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "entity")
    {
        entity_.yfilter = yfilter;
    }
    if(value_path == "ether-oam")
    {
        ether_oam.yfilter = yfilter;
    }
    if(value_path == "event-manager")
    {
        event_manager.yfilter = yfilter;
    }
    if(value_path == "flowmon")
    {
        flowmon.yfilter = yfilter;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl.yfilter = yfilter;
    }
    if(value_path == "gatekeeper")
    {
        gatekeeper.yfilter = yfilter;
    }
    if(value_path == "hsrp")
    {
        hsrp.yfilter = yfilter;
    }
    if(value_path == "icsudsu")
    {
        icsudsu.yfilter = yfilter;
    }
    if(value_path == "ima")
    {
        ima.yfilter = yfilter;
    }
    if(value_path == "ipmobile")
    {
        ipmobile.yfilter = yfilter;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast.yfilter = yfilter;
    }
    if(value_path == "ipsla")
    {
        ipsla.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "local-auth")
    {
        local_auth.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "msdp")
    {
        msdp.yfilter = yfilter;
    }
    if(value_path == "mvpn")
    {
        mvpn.yfilter = yfilter;
    }
    if(value_path == "pppoe")
    {
        pppoe.yfilter = yfilter;
    }
    if(value_path == "rep")
    {
        rep.yfilter = yfilter;
    }
    if(value_path == "resource-policy")
    {
        resource_policy.yfilter = yfilter;
    }
    if(value_path == "rf")
    {
        rf.yfilter = yfilter;
    }
    if(value_path == "rogue-ap")
    {
        rogue_ap.yfilter = yfilter;
    }
    if(value_path == "rsvp")
    {
        rsvp.yfilter = yfilter;
    }
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
    if(value_path == "sonet")
    {
        sonet.yfilter = yfilter;
    }
    if(value_path == "srp")
    {
        srp.yfilter = yfilter;
    }
    if(value_path == "srst")
    {
        srst.yfilter = yfilter;
    }
    if(value_path == "stun")
    {
        stun.yfilter = yfilter;
    }
    if(value_path == "switch-over")
    {
        switch_over.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "tty")
    {
        tty.yfilter = yfilter;
    }
    if(value_path == "vlan-mac-limit")
    {
        vlan_mac_limit.yfilter = yfilter;
    }
    if(value_path == "vlan-membership")
    {
        vlan_membership.yfilter = yfilter;
    }
    if(value_path == "vlancreate")
    {
        vlancreate.yfilter = yfilter;
    }
    if(value_path == "vlandelete")
    {
        vlandelete.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
    if(value_path == "vsimaster")
    {
        vsimaster.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
    if(value_path == "wlan-wep")
    {
        wlan_wep.yfilter = yfilter;
    }
    if(value_path == "xgcp")
    {
        xgcp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarms" || name == "atm" || name == "auth-framework" || name == "bgp-conf" || name == "bridge" || name == "bulkstat" || name == "c6kxbar" || name == "call-home" || name == "cef" || name == "cpu" || name == "csg" || name == "dot1x" || name == "dsp" || name == "energywise" || name == "entity-diag" || name == "envmon" || name == "errdisable" || name == "ethernet" || name == "firewall" || name == "flash" || name == "flex-links" || name == "frame-relay" || name == "ike" || name == "ipsec" || name == "isakmp" || name == "isdn" || name == "l2tc" || name == "l2tun" || name == "license" || name == "mac-notification" || name == "mac-notification2" || name == "memory" || name == "mpls" || name == "nhrp" || name == "ospf" || name == "ospfv3" || name == "pim" || name == "plogd" || name == "port-security" || name == "power-ethernet" || name == "pw" || name == "slb" || name == "snmp" || name == "stackwise" || name == "stpx" || name == "transceiver" || name == "trustsec" || name == "trustsec-interface" || name == "trustsec-policy" || name == "trustsec-server" || name == "trustsec-sxp" || name == "udld" || name == "vrfmib" || name == "vstack" || name == "vswitch" || name == "wireless" || name == "aaa_server" || name == "authenticate-fail" || name == "bfd" || name == "bgp" || name == "bstun" || name == "c2900" || name == "casa" || name == "ccme" || name == "channel" || name == "chassis" || name == "cluster" || name == "cnpd" || name == "config" || name == "config-copy" || name == "config-ctid" || name == "copy-config" || name == "cpu_threshold" || name == "deauthenticate" || name == "dial" || name == "director" || name == "disassociate" || name == "dlsw" || name == "dnis" || name == "dot11-qos" || name == "ds0-busyout" || name == "ds1" || name == "ds1-loopback" || name == "ds3" || name == "eigrp" || name == "entity" || name == "ether-oam" || name == "event-manager" || name == "flowmon" || name == "fru-ctrl" || name == "gatekeeper" || name == "hsrp" || name == "icsudsu" || name == "ima" || name == "ipmobile" || name == "ipmulticast" || name == "ipsla" || name == "isis" || name == "local-auth" || name == "module" || name == "msdp" || name == "mvpn" || name == "pppoe" || name == "rep" || name == "resource-policy" || name == "rf" || name == "rogue-ap" || name == "rsvp" || name == "rtr" || name == "sonet" || name == "srp" || name == "srst" || name == "stun" || name == "switch-over" || name == "syslog" || name == "tty" || name == "vlan-mac-limit" || name == "vlan-membership" || name == "vlancreate" || name == "vlandelete" || name == "voice" || name == "vrrp" || name == "vsimaster" || name == "vtp" || name == "wlan-wep" || name == "xgcp")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::TrustsecSxp()
    :
    binding_conflict{YType::empty, "binding-conflict"},
    binding_err{YType::empty, "binding-err"},
    binding_expn_fail{YType::empty, "binding-expn-fail"},
    conn_config_err{YType::empty, "conn-config-err"},
    conn_down{YType::empty, "conn-down"},
    conn_srcaddr_err{YType::empty, "conn-srcaddr-err"},
    conn_up{YType::empty, "conn-up"},
    msg_parse_err{YType::empty, "msg-parse-err"},
    oper_nodeid_change{YType::empty, "oper-nodeid-change"}
{
    yang_name = "trustsec-sxp"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::~TrustsecSxp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_data() const
{
    return binding_conflict.is_set
	|| binding_err.is_set
	|| binding_expn_fail.is_set
	|| conn_config_err.is_set
	|| conn_down.is_set
	|| conn_srcaddr_err.is_set
	|| conn_up.is_set
	|| msg_parse_err.is_set
	|| oper_nodeid_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_conflict.yfilter)
	|| ydk::is_set(binding_err.yfilter)
	|| ydk::is_set(binding_expn_fail.yfilter)
	|| ydk::is_set(conn_config_err.yfilter)
	|| ydk::is_set(conn_down.yfilter)
	|| ydk::is_set(conn_srcaddr_err.yfilter)
	|| ydk::is_set(conn_up.yfilter)
	|| ydk::is_set(msg_parse_err.yfilter)
	|| ydk::is_set(oper_nodeid_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-sxp";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_conflict.is_set || is_set(binding_conflict.yfilter)) leaf_name_data.push_back(binding_conflict.get_name_leafdata());
    if (binding_err.is_set || is_set(binding_err.yfilter)) leaf_name_data.push_back(binding_err.get_name_leafdata());
    if (binding_expn_fail.is_set || is_set(binding_expn_fail.yfilter)) leaf_name_data.push_back(binding_expn_fail.get_name_leafdata());
    if (conn_config_err.is_set || is_set(conn_config_err.yfilter)) leaf_name_data.push_back(conn_config_err.get_name_leafdata());
    if (conn_down.is_set || is_set(conn_down.yfilter)) leaf_name_data.push_back(conn_down.get_name_leafdata());
    if (conn_srcaddr_err.is_set || is_set(conn_srcaddr_err.yfilter)) leaf_name_data.push_back(conn_srcaddr_err.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.yfilter)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (msg_parse_err.is_set || is_set(msg_parse_err.yfilter)) leaf_name_data.push_back(msg_parse_err.get_name_leafdata());
    if (oper_nodeid_change.is_set || is_set(oper_nodeid_change.yfilter)) leaf_name_data.push_back(oper_nodeid_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-conflict")
    {
        binding_conflict = value;
        binding_conflict.value_namespace = name_space;
        binding_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-err")
    {
        binding_err = value;
        binding_err.value_namespace = name_space;
        binding_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-expn-fail")
    {
        binding_expn_fail = value;
        binding_expn_fail.value_namespace = name_space;
        binding_expn_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-config-err")
    {
        conn_config_err = value;
        conn_config_err.value_namespace = name_space;
        conn_config_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-down")
    {
        conn_down = value;
        conn_down.value_namespace = name_space;
        conn_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-srcaddr-err")
    {
        conn_srcaddr_err = value;
        conn_srcaddr_err.value_namespace = name_space;
        conn_srcaddr_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
        conn_up.value_namespace = name_space;
        conn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-parse-err")
    {
        msg_parse_err = value;
        msg_parse_err.value_namespace = name_space;
        msg_parse_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-nodeid-change")
    {
        oper_nodeid_change = value;
        oper_nodeid_change.value_namespace = name_space;
        oper_nodeid_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-conflict")
    {
        binding_conflict.yfilter = yfilter;
    }
    if(value_path == "binding-err")
    {
        binding_err.yfilter = yfilter;
    }
    if(value_path == "binding-expn-fail")
    {
        binding_expn_fail.yfilter = yfilter;
    }
    if(value_path == "conn-config-err")
    {
        conn_config_err.yfilter = yfilter;
    }
    if(value_path == "conn-down")
    {
        conn_down.yfilter = yfilter;
    }
    if(value_path == "conn-srcaddr-err")
    {
        conn_srcaddr_err.yfilter = yfilter;
    }
    if(value_path == "conn-up")
    {
        conn_up.yfilter = yfilter;
    }
    if(value_path == "msg-parse-err")
    {
        msg_parse_err.yfilter = yfilter;
    }
    if(value_path == "oper-nodeid-change")
    {
        oper_nodeid_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-conflict" || name == "binding-err" || name == "binding-expn-fail" || name == "conn-config-err" || name == "conn-down" || name == "conn-srcaddr-err" || name == "conn-up" || name == "msg-parse-err" || name == "oper-nodeid-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::Vswitch()
    :
    dual_active(nullptr) // presence node
{
    yang_name = "vswitch"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::~Vswitch()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_data() const
{
    return (dual_active !=  nullptr && dual_active->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_operation() const
{
    return is_set(yfilter)
	|| (dual_active !=  nullptr && dual_active->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vswitch";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive>();
        }
        return dual_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-active")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::DualActive()
    :
    vsl{YType::empty, "vsl"}
{
    yang_name = "dual-active"; yang_parent_name = "vswitch";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::~DualActive()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_data() const
{
    return vsl.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vsl.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-active";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/vswitch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vsl.is_set || is_set(vsl.yfilter)) leaf_name_data.push_back(vsl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vsl")
    {
        vsl = value;
        vsl.value_namespace = name_space;
        vsl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vsl")
    {
        vsl.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsl")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::TrustsecServer()
    :
    radius_server(nullptr) // presence node
{
    yang_name = "trustsec-server"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::~TrustsecServer()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_data() const
{
    return (radius_server !=  nullptr && radius_server->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_operation() const
{
    return is_set(yfilter)
	|| (radius_server !=  nullptr && radius_server->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-server";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius-server")
    {
        if(radius_server == nullptr)
        {
            radius_server = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer>();
        }
        return radius_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius_server != nullptr)
    {
        children["radius-server"] = radius_server;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius-server")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::RadiusServer()
    :
    provision_secret{YType::empty, "provision-secret"}
{
    yang_name = "radius-server"; yang_parent_name = "trustsec-server";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::~RadiusServer()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_data() const
{
    return provision_secret.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(provision_secret.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (provision_secret.is_set || is_set(provision_secret.yfilter)) leaf_name_data.push_back(provision_secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "provision-secret")
    {
        provision_secret = value;
        provision_secret.value_namespace = name_space;
        provision_secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "provision-secret")
    {
        provision_secret.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provision-secret")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::Trustsec()
    :
    authz_file_error(nullptr) // presence node
{
    yang_name = "trustsec"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::~Trustsec()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_data() const
{
    return (authz_file_error !=  nullptr && authz_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_operation() const
{
    return is_set(yfilter)
	|| (authz_file_error !=  nullptr && authz_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authz-file-error")
    {
        if(authz_file_error == nullptr)
        {
            authz_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError>();
        }
        return authz_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authz_file_error != nullptr)
    {
        children["authz-file-error"] = authz_file_error;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::AuthzFileError()
    :
    cache_file_error(nullptr) // presence node
{
    yang_name = "authz-file-error"; yang_parent_name = "trustsec";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::~AuthzFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_data() const
{
    return (cache_file_error !=  nullptr && cache_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_operation() const
{
    return is_set(yfilter)
	|| (cache_file_error !=  nullptr && cache_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authz-file-error";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache-file-error")
    {
        if(cache_file_error == nullptr)
        {
            cache_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError>();
        }
        return cache_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache_file_error != nullptr)
    {
        children["cache-file-error"] = cache_file_error;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::CacheFileError()
    :
    keystore_file_error(nullptr) // presence node
{
    yang_name = "cache-file-error"; yang_parent_name = "authz-file-error";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::~CacheFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_data() const
{
    return (keystore_file_error !=  nullptr && keystore_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_operation() const
{
    return is_set(yfilter)
	|| (keystore_file_error !=  nullptr && keystore_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-file-error";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keystore-file-error")
    {
        if(keystore_file_error == nullptr)
        {
            keystore_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError>();
        }
        return keystore_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keystore_file_error != nullptr)
    {
        children["keystore-file-error"] = keystore_file_error;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keystore-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreFileError()
    :
    keystore_sync_fail(nullptr) // presence node
{
    yang_name = "keystore-file-error"; yang_parent_name = "cache-file-error";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::~KeystoreFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_data() const
{
    return (keystore_sync_fail !=  nullptr && keystore_sync_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_operation() const
{
    return is_set(yfilter)
	|| (keystore_sync_fail !=  nullptr && keystore_sync_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keystore-file-error";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keystore-sync-fail")
    {
        if(keystore_sync_fail == nullptr)
        {
            keystore_sync_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail>();
        }
        return keystore_sync_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keystore_sync_fail != nullptr)
    {
        children["keystore-sync-fail"] = keystore_sync_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keystore-sync-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::KeystoreSyncFail()
    :
    random_number_fail(nullptr) // presence node
{
    yang_name = "keystore-sync-fail"; yang_parent_name = "keystore-file-error";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::~KeystoreSyncFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_data() const
{
    return (random_number_fail !=  nullptr && random_number_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_operation() const
{
    return is_set(yfilter)
	|| (random_number_fail !=  nullptr && random_number_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keystore-sync-fail";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/keystore-file-error/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "random-number-fail")
    {
        if(random_number_fail == nullptr)
        {
            random_number_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail>();
        }
        return random_number_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(random_number_fail != nullptr)
    {
        children["random-number-fail"] = random_number_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "random-number-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::RandomNumberFail()
    :
    src_entropy_fail{YType::empty, "src-entropy-fail"}
{
    yang_name = "random-number-fail"; yang_parent_name = "keystore-sync-fail";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::~RandomNumberFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_data() const
{
    return src_entropy_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_entropy_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random-number-fail";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/keystore-file-error/keystore-sync-fail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_entropy_fail.is_set || is_set(src_entropy_fail.yfilter)) leaf_name_data.push_back(src_entropy_fail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-entropy-fail")
    {
        src_entropy_fail = value;
        src_entropy_fail.value_namespace = name_space;
        src_entropy_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-entropy-fail")
    {
        src_entropy_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-entropy-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::TrustsecInterface()
    :
    unauthorized(nullptr) // presence node
{
    yang_name = "trustsec-interface"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::~TrustsecInterface()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_data() const
{
    return (unauthorized !=  nullptr && unauthorized->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_operation() const
{
    return is_set(yfilter)
	|| (unauthorized !=  nullptr && unauthorized->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-interface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unauthorized")
    {
        if(unauthorized == nullptr)
        {
            unauthorized = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized>();
        }
        return unauthorized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unauthorized != nullptr)
    {
        children["unauthorized"] = unauthorized;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unauthorized")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::Unauthorized()
    :
    sap_fail(nullptr) // presence node
{
    yang_name = "unauthorized"; yang_parent_name = "trustsec-interface";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::~Unauthorized()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_data() const
{
    return (sap_fail !=  nullptr && sap_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_operation() const
{
    return is_set(yfilter)
	|| (sap_fail !=  nullptr && sap_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauthorized";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sap-fail")
    {
        if(sap_fail == nullptr)
        {
            sap_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail>();
        }
        return sap_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sap_fail != nullptr)
    {
        children["sap-fail"] = sap_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sap-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::SapFail()
    :
    authc_fail(nullptr) // presence node
{
    yang_name = "sap-fail"; yang_parent_name = "unauthorized";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::~SapFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_data() const
{
    return (authc_fail !=  nullptr && authc_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_operation() const
{
    return is_set(yfilter)
	|| (authc_fail !=  nullptr && authc_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap-fail";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authc-fail")
    {
        if(authc_fail == nullptr)
        {
            authc_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail>();
        }
        return authc_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authc_fail != nullptr)
    {
        children["authc-fail"] = authc_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authc-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::AuthcFail()
    :
    supplicant_fail(nullptr) // presence node
{
    yang_name = "authc-fail"; yang_parent_name = "sap-fail";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::~AuthcFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_data() const
{
    return (supplicant_fail !=  nullptr && supplicant_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_operation() const
{
    return is_set(yfilter)
	|| (supplicant_fail !=  nullptr && supplicant_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authc-fail";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/sap-fail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supplicant-fail")
    {
        if(supplicant_fail == nullptr)
        {
            supplicant_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail>();
        }
        return supplicant_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supplicant_fail != nullptr)
    {
        children["supplicant-fail"] = supplicant_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supplicant-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::SupplicantFail()
    :
    authz_fail{YType::empty, "authz-fail"}
{
    yang_name = "supplicant-fail"; yang_parent_name = "authc-fail";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::~SupplicantFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_data() const
{
    return authz_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authz_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant-fail";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/sap-fail/authc-fail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authz_fail.is_set || is_set(authz_fail.yfilter)) leaf_name_data.push_back(authz_fail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authz-fail")
    {
        authz_fail = value;
        authz_fail.value_namespace = name_space;
        authz_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authz-fail")
    {
        authz_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::TrustsecPolicy()
    :
    peer_policy_updated(nullptr) // presence node
{
    yang_name = "trustsec-policy"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::~TrustsecPolicy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_data() const
{
    return (peer_policy_updated !=  nullptr && peer_policy_updated->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (peer_policy_updated !=  nullptr && peer_policy_updated->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-policy";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-policy-updated")
    {
        if(peer_policy_updated == nullptr)
        {
            peer_policy_updated = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated>();
        }
        return peer_policy_updated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_policy_updated != nullptr)
    {
        children["peer-policy-updated"] = peer_policy_updated;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy-updated")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::PeerPolicyUpdated()
    :
    authz_sgacl_fail{YType::empty, "authz-sgacl-fail"}
{
    yang_name = "peer-policy-updated"; yang_parent_name = "trustsec-policy";
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::~PeerPolicyUpdated()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_data() const
{
    return authz_sgacl_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authz_sgacl_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-policy-updated";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authz_sgacl_fail.is_set || is_set(authz_sgacl_fail.yfilter)) leaf_name_data.push_back(authz_sgacl_fail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authz-sgacl-fail")
    {
        authz_sgacl_fail = value;
        authz_sgacl_fail.value_namespace = name_space;
        authz_sgacl_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authz-sgacl-fail")
    {
        authz_sgacl_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-sgacl-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::Ospfv3()
    :
    errors{YType::empty, "errors"},
    state_change{YType::empty, "state-change"}
{
    yang_name = "ospfv3"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::~Ospfv3()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_data() const
{
    return errors.is_set
	|| state_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(state_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (state_change.is_set || is_set(state_change.yfilter)) leaf_name_data.push_back(state_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change")
    {
        state_change = value;
        state_change.value_namespace = name_space;
        state_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "state-change")
    {
        state_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errors" || name == "state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Ike()
    :
    policy(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy>())
	,tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel>())
{
    policy->parent = this;

    tunnel->parent = this;

    yang_name = "ike"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::~Ike()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ike";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tunnel")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::Policy()
    :
    add{YType::empty, "add"},
    delete_{YType::empty, "delete"}
{
    yang_name = "policy"; yang_parent_name = "ike";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::~Policy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_data() const
{
    return add.is_set
	|| delete_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ike/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "delete")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{
    yang_name = "tunnel"; yang_parent_name = "ike";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_data() const
{
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ike/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::Alarms()
    :
    alarm_type{YType::str, "alarm-type"}
{
    yang_name = "alarms"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::~Alarms()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_data() const
{
    return alarm_type.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_type.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarms";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_type.is_set || is_set(alarm_type.yfilter)) leaf_name_data.push_back(alarm_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-type")
    {
        alarm_type = value;
        alarm_type.value_namespace = name_space;
        alarm_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-type")
    {
        alarm_type.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-type")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Atm()
    :
    pvc(nullptr) // presence node
	,subif(nullptr) // presence node
{
    yang_name = "atm"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::~Atm()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_data() const
{
    return (pvc !=  nullptr && pvc->has_data())
	|| (subif !=  nullptr && subif->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_operation() const
{
    return is_set(yfilter)
	|| (pvc !=  nullptr && pvc->has_operation())
	|| (subif !=  nullptr && subif->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvc")
    {
        if(pvc == nullptr)
        {
            pvc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc>();
        }
        return pvc;
    }

    if(child_yang_name == "subif")
    {
        if(subif == nullptr)
        {
            subif = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif>();
        }
        return subif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pvc != nullptr)
    {
        children["pvc"] = pvc;
    }

    if(subif != nullptr)
    {
        children["subif"] = subif;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvc" || name == "subif")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Pvc()
    :
    fail_interval{YType::uint16, "fail-interval"},
    interval{YType::uint16, "interval"}
    	,
    extension(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension>())
{
    extension->parent = this;

    yang_name = "pvc"; yang_parent_name = "atm";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::~Pvc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_data() const
{
    return fail_interval.is_set
	|| interval.is_set
	|| (extension !=  nullptr && extension->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fail_interval.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (extension !=  nullptr && extension->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvc";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_interval.is_set || is_set(fail_interval.yfilter)) leaf_name_data.push_back(fail_interval.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extension")
    {
        if(extension == nullptr)
        {
            extension = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension>();
        }
        return extension;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extension != nullptr)
    {
        children["extension"] = extension;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fail-interval")
    {
        fail_interval = value;
        fail_interval.value_namespace = name_space;
        fail_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fail-interval")
    {
        fail_interval.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extension" || name == "fail-interval" || name == "interval")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Extension()
    :
    down{YType::empty, "down"},
    mibversion{YType::enumeration, "mibversion"},
    up{YType::empty, "up"}
    	,
    oam(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam>())
{
    oam->parent = this;

    yang_name = "extension"; yang_parent_name = "pvc";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::~Extension()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_data() const
{
    return down.is_set
	|| mibversion.is_set
	|| up.is_set
	|| (oam !=  nullptr && oam->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(mibversion.yfilter)
	|| ydk::is_set(up.yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (mibversion.is_set || is_set(mibversion.yfilter)) leaf_name_data.push_back(mibversion.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mibversion")
    {
        mibversion = value;
        mibversion.value_namespace = name_space;
        mibversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "mibversion")
    {
        mibversion.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam" || name == "down" || name == "mibversion" || name == "up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Oam()
    :
    failure(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure>())
{
    failure->parent = this;

    yang_name = "oam"; yang_parent_name = "extension";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::~Oam()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_data() const
{
    return (failure !=  nullptr && failure->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/extension/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::Failure()
    :
    loopback{YType::empty, "loopback"}
{
    yang_name = "failure"; yang_parent_name = "oam";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::~Failure()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_data() const
{
    return loopback.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/pvc/extension/oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::Subif()
    :
    count{YType::uint16, "count"},
    interval{YType::uint16, "interval"}
{
    yang_name = "subif"; yang_parent_name = "atm";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::~Subif()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/atm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::AuthFramework()
    :
    sec_violation{YType::empty, "sec-violation"}
{
    yang_name = "auth-framework"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::~AuthFramework()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_data() const
{
    return sec_violation.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec_violation.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-framework";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec_violation.is_set || is_set(sec_violation.yfilter)) leaf_name_data.push_back(sec_violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec-violation")
    {
        sec_violation = value;
        sec_violation.value_namespace = name_space;
        sec_violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec-violation")
    {
        sec_violation.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec-violation")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::BgpConf()
    :
    cbgp2{YType::empty, "cbgp2"}
{
    yang_name = "bgp-conf"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::~BgpConf()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_data() const
{
    return cbgp2.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgp2.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-conf";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgp2.is_set || is_set(cbgp2.yfilter)) leaf_name_data.push_back(cbgp2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgp2")
    {
        cbgp2 = value;
        cbgp2.value_namespace = name_space;
        cbgp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgp2")
    {
        cbgp2.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgp2")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::Bridge()
    :
    newroot{YType::empty, "newroot"},
    topologychange{YType::empty, "topologychange"}
{
    yang_name = "bridge"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::~Bridge()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_data() const
{
    return newroot.is_set
	|| topologychange.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(newroot.yfilter)
	|| ydk::is_set(topologychange.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (newroot.is_set || is_set(newroot.yfilter)) leaf_name_data.push_back(newroot.get_name_leafdata());
    if (topologychange.is_set || is_set(topologychange.yfilter)) leaf_name_data.push_back(topologychange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "newroot")
    {
        newroot = value;
        newroot.value_namespace = name_space;
        newroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topologychange")
    {
        topologychange = value;
        topologychange.value_namespace = name_space;
        topologychange.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "newroot")
    {
        newroot.yfilter = yfilter;
    }
    if(value_path == "topologychange")
    {
        topologychange.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "newroot" || name == "topologychange")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::Bulkstat()
    :
    collection{YType::empty, "collection"},
    transfer{YType::empty, "transfer"}
{
    yang_name = "bulkstat"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::~Bulkstat()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_data() const
{
    return collection.is_set
	|| transfer.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collection.yfilter)
	|| ydk::is_set(transfer.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulkstat";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collection.is_set || is_set(collection.yfilter)) leaf_name_data.push_back(collection.get_name_leafdata());
    if (transfer.is_set || is_set(transfer.yfilter)) leaf_name_data.push_back(transfer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collection")
    {
        collection = value;
        collection.value_namespace = name_space;
        collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transfer")
    {
        transfer = value;
        transfer.value_namespace = name_space;
        transfer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collection")
    {
        collection.yfilter = yfilter;
    }
    if(value_path == "transfer")
    {
        transfer.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collection" || name == "transfer")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::CallHome()
    :
    message_send_fail{YType::empty, "message-send-fail"},
    server_fail{YType::empty, "server-fail"}
{
    yang_name = "call-home"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::~CallHome()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_data() const
{
    return message_send_fail.is_set
	|| server_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_send_fail.yfilter)
	|| ydk::is_set(server_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "call-home";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_send_fail.is_set || is_set(message_send_fail.yfilter)) leaf_name_data.push_back(message_send_fail.get_name_leafdata());
    if (server_fail.is_set || is_set(server_fail.yfilter)) leaf_name_data.push_back(server_fail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-send-fail")
    {
        message_send_fail = value;
        message_send_fail.value_namespace = name_space;
        message_send_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-fail")
    {
        server_fail = value;
        server_fail.value_namespace = name_space;
        server_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-send-fail")
    {
        message_send_fail.yfilter = yfilter;
    }
    if(value_path == "server-fail")
    {
        server_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::CallHome::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-send-fail" || name == "server-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::C6Kxbar()
    :
    intbus_crcexcd{YType::empty, "intbus-crcexcd"},
    intbus_crcrcvrd{YType::empty, "intbus-crcrcvrd"},
    swbus{YType::empty, "swbus"}
{
    yang_name = "c6kxbar"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::~C6Kxbar()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::has_data() const
{
    return intbus_crcexcd.is_set
	|| intbus_crcrcvrd.is_set
	|| swbus.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intbus_crcexcd.yfilter)
	|| ydk::is_set(intbus_crcrcvrd.yfilter)
	|| ydk::is_set(swbus.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c6kxbar";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intbus_crcexcd.is_set || is_set(intbus_crcexcd.yfilter)) leaf_name_data.push_back(intbus_crcexcd.get_name_leafdata());
    if (intbus_crcrcvrd.is_set || is_set(intbus_crcrcvrd.yfilter)) leaf_name_data.push_back(intbus_crcrcvrd.get_name_leafdata());
    if (swbus.is_set || is_set(swbus.yfilter)) leaf_name_data.push_back(swbus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intbus-crcexcd")
    {
        intbus_crcexcd = value;
        intbus_crcexcd.value_namespace = name_space;
        intbus_crcexcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intbus-crcrcvrd")
    {
        intbus_crcrcvrd = value;
        intbus_crcrcvrd.value_namespace = name_space;
        intbus_crcrcvrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swbus")
    {
        swbus = value;
        swbus.value_namespace = name_space;
        swbus.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intbus-crcexcd")
    {
        intbus_crcexcd.yfilter = yfilter;
    }
    if(value_path == "intbus-crcrcvrd")
    {
        intbus_crcrcvrd.yfilter = yfilter;
    }
    if(value_path == "swbus")
    {
        swbus.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intbus-crcexcd" || name == "intbus-crcrcvrd" || name == "swbus")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cef::Cef()
    :
    inconsistency{YType::empty, "inconsistency"},
    peer_fib_state_change{YType::empty, "peer-fib-state-change"},
    peer_state_change{YType::empty, "peer-state-change"},
    resource_failure{YType::empty, "resource-failure"}
{
    yang_name = "cef"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cef::~Cef()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_data() const
{
    return inconsistency.is_set
	|| peer_fib_state_change.is_set
	|| peer_state_change.is_set
	|| resource_failure.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inconsistency.yfilter)
	|| ydk::is_set(peer_fib_state_change.yfilter)
	|| ydk::is_set(peer_state_change.yfilter)
	|| ydk::is_set(resource_failure.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inconsistency.is_set || is_set(inconsistency.yfilter)) leaf_name_data.push_back(inconsistency.get_name_leafdata());
    if (peer_fib_state_change.is_set || is_set(peer_fib_state_change.yfilter)) leaf_name_data.push_back(peer_fib_state_change.get_name_leafdata());
    if (peer_state_change.is_set || is_set(peer_state_change.yfilter)) leaf_name_data.push_back(peer_state_change.get_name_leafdata());
    if (resource_failure.is_set || is_set(resource_failure.yfilter)) leaf_name_data.push_back(resource_failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inconsistency")
    {
        inconsistency = value;
        inconsistency.value_namespace = name_space;
        inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-fib-state-change")
    {
        peer_fib_state_change = value;
        peer_fib_state_change.value_namespace = name_space;
        peer_fib_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-state-change")
    {
        peer_state_change = value;
        peer_state_change.value_namespace = name_space;
        peer_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-failure")
    {
        resource_failure = value;
        resource_failure.value_namespace = name_space;
        resource_failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inconsistency")
    {
        inconsistency.yfilter = yfilter;
    }
    if(value_path == "peer-fib-state-change")
    {
        peer_fib_state_change.yfilter = yfilter;
    }
    if(value_path == "peer-state-change")
    {
        peer_state_change.yfilter = yfilter;
    }
    if(value_path == "resource-failure")
    {
        resource_failure.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inconsistency" || name == "peer-fib-state-change" || name == "peer-state-change" || name == "resource-failure")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::Cpu()
    :
    threshold{YType::empty, "threshold"}
{
    yang_name = "cpu"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::~Cpu()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_data() const
{
    return threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Csg::Csg()
    :
    agent{YType::empty, "agent"},
    database{YType::empty, "database"},
    quota_server{YType::empty, "quota-server"}
{
    yang_name = "csg"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Csg::~Csg()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_data() const
{
    return agent.is_set
	|| database.is_set
	|| quota_server.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent.yfilter)
	|| ydk::is_set(database.yfilter)
	|| ydk::is_set(quota_server.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csg";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent.is_set || is_set(agent.yfilter)) leaf_name_data.push_back(agent.get_name_leafdata());
    if (database.is_set || is_set(database.yfilter)) leaf_name_data.push_back(database.get_name_leafdata());
    if (quota_server.is_set || is_set(quota_server.yfilter)) leaf_name_data.push_back(quota_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Csg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Csg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent")
    {
        agent = value;
        agent.value_namespace = name_space;
        agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database")
    {
        database = value;
        database.value_namespace = name_space;
        database.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quota-server")
    {
        quota_server = value;
        quota_server.value_namespace = name_space;
        quota_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Csg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent")
    {
        agent.yfilter = yfilter;
    }
    if(value_path == "database")
    {
        database.yfilter = yfilter;
    }
    if(value_path == "quota-server")
    {
        quota_server.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Csg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent" || name == "database" || name == "quota-server")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::Dot1X()
    :
    auth_fail_vlan{YType::empty, "auth-fail-vlan"},
    guest_vlan{YType::empty, "guest-vlan"},
    no_auth_fail_vlan{YType::empty, "no-auth-fail-vlan"},
    no_guest_vlan{YType::empty, "no-guest-vlan"}
{
    yang_name = "dot1x"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::~Dot1X()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::has_data() const
{
    return auth_fail_vlan.is_set
	|| guest_vlan.is_set
	|| no_auth_fail_vlan.is_set
	|| no_guest_vlan.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_fail_vlan.yfilter)
	|| ydk::is_set(guest_vlan.yfilter)
	|| ydk::is_set(no_auth_fail_vlan.yfilter)
	|| ydk::is_set(no_guest_vlan.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_fail_vlan.is_set || is_set(auth_fail_vlan.yfilter)) leaf_name_data.push_back(auth_fail_vlan.get_name_leafdata());
    if (guest_vlan.is_set || is_set(guest_vlan.yfilter)) leaf_name_data.push_back(guest_vlan.get_name_leafdata());
    if (no_auth_fail_vlan.is_set || is_set(no_auth_fail_vlan.yfilter)) leaf_name_data.push_back(no_auth_fail_vlan.get_name_leafdata());
    if (no_guest_vlan.is_set || is_set(no_guest_vlan.yfilter)) leaf_name_data.push_back(no_guest_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-fail-vlan")
    {
        auth_fail_vlan = value;
        auth_fail_vlan.value_namespace = name_space;
        auth_fail_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guest-vlan")
    {
        guest_vlan = value;
        guest_vlan.value_namespace = name_space;
        guest_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-auth-fail-vlan")
    {
        no_auth_fail_vlan = value;
        no_auth_fail_vlan.value_namespace = name_space;
        no_auth_fail_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-guest-vlan")
    {
        no_guest_vlan = value;
        no_guest_vlan.value_namespace = name_space;
        no_guest_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-fail-vlan")
    {
        auth_fail_vlan.yfilter = yfilter;
    }
    if(value_path == "guest-vlan")
    {
        guest_vlan.yfilter = yfilter;
    }
    if(value_path == "no-auth-fail-vlan")
    {
        no_auth_fail_vlan.yfilter = yfilter;
    }
    if(value_path == "no-guest-vlan")
    {
        no_guest_vlan.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-fail-vlan" || name == "guest-vlan" || name == "no-auth-fail-vlan" || name == "no-guest-vlan")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::Dsp()
    :
    card_status{YType::empty, "card-status"},
    oper_state{YType::empty, "oper-state"}
{
    yang_name = "dsp"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::~Dsp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_data() const
{
    return card_status.is_set
	|| oper_state.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_status.yfilter)
	|| ydk::is_set(oper_state.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsp";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_status.is_set || is_set(card_status.yfilter)) leaf_name_data.push_back(card_status.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-status")
    {
        card_status = value;
        card_status.value_namespace = name_space;
        card_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-status")
    {
        card_status.yfilter = yfilter;
    }
    if(value_path == "oper-state")
    {
        oper_state.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Dsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-status" || name == "oper-state")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::Energywise()
    :
    event_occured{YType::empty, "event-occured"},
    level_change{YType::empty, "level-change"},
    neighbor_added{YType::empty, "neighbor-added"},
    neighbor_deleted{YType::empty, "neighbor-deleted"}
{
    yang_name = "energywise"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::~Energywise()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_data() const
{
    return event_occured.is_set
	|| level_change.is_set
	|| neighbor_added.is_set
	|| neighbor_deleted.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_occured.yfilter)
	|| ydk::is_set(level_change.yfilter)
	|| ydk::is_set(neighbor_added.yfilter)
	|| ydk::is_set(neighbor_deleted.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "energywise";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_occured.is_set || is_set(event_occured.yfilter)) leaf_name_data.push_back(event_occured.get_name_leafdata());
    if (level_change.is_set || is_set(level_change.yfilter)) leaf_name_data.push_back(level_change.get_name_leafdata());
    if (neighbor_added.is_set || is_set(neighbor_added.yfilter)) leaf_name_data.push_back(neighbor_added.get_name_leafdata());
    if (neighbor_deleted.is_set || is_set(neighbor_deleted.yfilter)) leaf_name_data.push_back(neighbor_deleted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-occured")
    {
        event_occured = value;
        event_occured.value_namespace = name_space;
        event_occured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-change")
    {
        level_change = value;
        level_change.value_namespace = name_space;
        level_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-added")
    {
        neighbor_added = value;
        neighbor_added.value_namespace = name_space;
        neighbor_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-deleted")
    {
        neighbor_deleted = value;
        neighbor_deleted.value_namespace = name_space;
        neighbor_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-occured")
    {
        event_occured.yfilter = yfilter;
    }
    if(value_path == "level-change")
    {
        level_change.yfilter = yfilter;
    }
    if(value_path == "neighbor-added")
    {
        neighbor_added.yfilter = yfilter;
    }
    if(value_path == "neighbor-deleted")
    {
        neighbor_deleted.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-occured" || name == "level-change" || name == "neighbor-added" || name == "neighbor-deleted")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::EntityDiag()
    :
    boot_up_fail{YType::empty, "boot-up-fail"},
    hm_test_recover{YType::empty, "hm-test-recover"},
    hm_thresh_reached{YType::empty, "hm-thresh-reached"},
    scheduled_test_fail{YType::empty, "scheduled-test-fail"}
{
    yang_name = "entity-diag"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::~EntityDiag()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_data() const
{
    return boot_up_fail.is_set
	|| hm_test_recover.is_set
	|| hm_thresh_reached.is_set
	|| scheduled_test_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot_up_fail.yfilter)
	|| ydk::is_set(hm_test_recover.yfilter)
	|| ydk::is_set(hm_thresh_reached.yfilter)
	|| ydk::is_set(scheduled_test_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-diag";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_up_fail.is_set || is_set(boot_up_fail.yfilter)) leaf_name_data.push_back(boot_up_fail.get_name_leafdata());
    if (hm_test_recover.is_set || is_set(hm_test_recover.yfilter)) leaf_name_data.push_back(hm_test_recover.get_name_leafdata());
    if (hm_thresh_reached.is_set || is_set(hm_thresh_reached.yfilter)) leaf_name_data.push_back(hm_thresh_reached.get_name_leafdata());
    if (scheduled_test_fail.is_set || is_set(scheduled_test_fail.yfilter)) leaf_name_data.push_back(scheduled_test_fail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot-up-fail")
    {
        boot_up_fail = value;
        boot_up_fail.value_namespace = name_space;
        boot_up_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hm-test-recover")
    {
        hm_test_recover = value;
        hm_test_recover.value_namespace = name_space;
        hm_test_recover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hm-thresh-reached")
    {
        hm_thresh_reached = value;
        hm_thresh_reached.value_namespace = name_space;
        hm_thresh_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scheduled-test-fail")
    {
        scheduled_test_fail = value;
        scheduled_test_fail.value_namespace = name_space;
        scheduled_test_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot-up-fail")
    {
        boot_up_fail.yfilter = yfilter;
    }
    if(value_path == "hm-test-recover")
    {
        hm_test_recover.yfilter = yfilter;
    }
    if(value_path == "hm-thresh-reached")
    {
        hm_thresh_reached.yfilter = yfilter;
    }
    if(value_path == "scheduled-test-fail")
    {
        scheduled_test_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-up-fail" || name == "hm-test-recover" || name == "hm-thresh-reached" || name == "scheduled-test-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::Envmon()
    :
    fan{YType::empty, "fan"},
    shutdown{YType::empty, "shutdown"},
    status{YType::empty, "status"},
    supply{YType::empty, "supply"},
    temperature{YType::empty, "temperature"}
{
    yang_name = "envmon"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::~Envmon()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_data() const
{
    return fan.is_set
	|| shutdown.is_set
	|| status.is_set
	|| supply.is_set
	|| temperature.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fan.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(supply.yfilter)
	|| ydk::is_set(temperature.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "envmon";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fan.is_set || is_set(fan.yfilter)) leaf_name_data.push_back(fan.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (supply.is_set || is_set(supply.yfilter)) leaf_name_data.push_back(supply.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.yfilter)) leaf_name_data.push_back(temperature.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fan")
    {
        fan = value;
        fan.value_namespace = name_space;
        fan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supply")
    {
        supply = value;
        supply.value_namespace = name_space;
        supply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temperature")
    {
        temperature = value;
        temperature.value_namespace = name_space;
        temperature.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fan")
    {
        fan.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "supply")
    {
        supply.yfilter = yfilter;
    }
    if(value_path == "temperature")
    {
        temperature.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Envmon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan" || name == "shutdown" || name == "status" || name == "supply" || name == "temperature")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::Errdisable()
    :
    notification_rate{YType::uint16, "notification-rate"}
{
    yang_name = "errdisable"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::~Errdisable()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_data() const
{
    return notification_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notification_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_rate.is_set || is_set(notification_rate.yfilter)) leaf_name_data.push_back(notification_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-rate")
    {
        notification_rate = value;
        notification_rate.value_namespace = name_space;
        notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-rate")
    {
        notification_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Ethernet()
    :
    cfm(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm>())
	,evc(nullptr) // presence node
{
    cfm->parent = this;

    yang_name = "ethernet"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::~Ethernet()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_data() const
{
    return (cfm !=  nullptr && cfm->has_data())
	|| (evc !=  nullptr && evc->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (evc !=  nullptr && evc->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "evc")
    {
        if(evc == nullptr)
        {
            evc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc>();
        }
        return evc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(evc != nullptr)
    {
        children["evc"] = evc;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "evc")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cfm()
    :
    alarm{YType::empty, "alarm"}
    	,
    cc(nullptr) // presence node
	,crosscheck(nullptr) // presence node
{
    yang_name = "cfm"; yang_parent_name = "ethernet";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::~Cfm()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_data() const
{
    return alarm.is_set
	|| (cc !=  nullptr && cc->has_data())
	|| (crosscheck !=  nullptr && crosscheck->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| (cc !=  nullptr && cc->has_operation())
	|| (crosscheck !=  nullptr && crosscheck->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc")
    {
        if(cc == nullptr)
        {
            cc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc>();
        }
        return cc;
    }

    if(child_yang_name == "crosscheck")
    {
        if(crosscheck == nullptr)
        {
            crosscheck = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck>();
        }
        return crosscheck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cc != nullptr)
    {
        children["cc"] = cc;
    }

    if(crosscheck != nullptr)
    {
        children["crosscheck"] = crosscheck;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cc" || name == "crosscheck" || name == "alarm")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::Cc()
    :
    config{YType::empty, "config"},
    cross_connect{YType::empty, "cross-connect"},
    loop{YType::empty, "loop"},
    mep_down{YType::empty, "mep-down"},
    mep_up{YType::empty, "mep-up"}
{
    yang_name = "cc"; yang_parent_name = "cfm";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::~Cc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_data() const
{
    return config.is_set
	|| cross_connect.is_set
	|| loop.is_set
	|| mep_down.is_set
	|| mep_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(cross_connect.yfilter)
	|| ydk::is_set(loop.yfilter)
	|| ydk::is_set(mep_down.yfilter)
	|| ydk::is_set(mep_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (cross_connect.is_set || is_set(cross_connect.yfilter)) leaf_name_data.push_back(cross_connect.get_name_leafdata());
    if (loop.is_set || is_set(loop.yfilter)) leaf_name_data.push_back(loop.get_name_leafdata());
    if (mep_down.is_set || is_set(mep_down.yfilter)) leaf_name_data.push_back(mep_down.get_name_leafdata());
    if (mep_up.is_set || is_set(mep_up.yfilter)) leaf_name_data.push_back(mep_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect")
    {
        cross_connect = value;
        cross_connect.value_namespace = name_space;
        cross_connect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop")
    {
        loop = value;
        loop.value_namespace = name_space;
        loop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-down")
    {
        mep_down = value;
        mep_down.value_namespace = name_space;
        mep_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-up")
    {
        mep_up = value;
        mep_up.value_namespace = name_space;
        mep_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "cross-connect")
    {
        cross_connect.yfilter = yfilter;
    }
    if(value_path == "loop")
    {
        loop.yfilter = yfilter;
    }
    if(value_path == "mep-down")
    {
        mep_down.yfilter = yfilter;
    }
    if(value_path == "mep-up")
    {
        mep_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "cross-connect" || name == "loop" || name == "mep-down" || name == "mep-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::Crosscheck()
    :
    mep_missing{YType::empty, "mep-missing"},
    mep_unknown{YType::empty, "mep-unknown"},
    service_up{YType::empty, "service-up"}
{
    yang_name = "crosscheck"; yang_parent_name = "cfm";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::~Crosscheck()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_data() const
{
    return mep_missing.is_set
	|| mep_unknown.is_set
	|| service_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mep_missing.yfilter)
	|| ydk::is_set(mep_unknown.yfilter)
	|| ydk::is_set(service_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crosscheck";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_missing.is_set || is_set(mep_missing.yfilter)) leaf_name_data.push_back(mep_missing.get_name_leafdata());
    if (mep_unknown.is_set || is_set(mep_unknown.yfilter)) leaf_name_data.push_back(mep_unknown.get_name_leafdata());
    if (service_up.is_set || is_set(service_up.yfilter)) leaf_name_data.push_back(service_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mep-missing")
    {
        mep_missing = value;
        mep_missing.value_namespace = name_space;
        mep_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mep-unknown")
    {
        mep_unknown = value;
        mep_unknown.value_namespace = name_space;
        mep_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-up")
    {
        service_up = value;
        service_up.value_namespace = name_space;
        service_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mep-missing")
    {
        mep_missing.yfilter = yfilter;
    }
    if(value_path == "mep-unknown")
    {
        mep_unknown.yfilter = yfilter;
    }
    if(value_path == "service-up")
    {
        service_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mep-missing" || name == "mep-unknown" || name == "service-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::Evc()
    :
    create{YType::empty, "create"},
    delete_{YType::empty, "delete"},
    status{YType::empty, "status"}
{
    yang_name = "evc"; yang_parent_name = "ethernet";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::~Evc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_data() const
{
    return create.is_set
	|| delete_.is_set
	|| status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create" || name == "delete" || name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::Firewall()
    :
    serverstatus{YType::empty, "serverstatus"}
{
    yang_name = "firewall"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::~Firewall()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_data() const
{
    return serverstatus.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serverstatus.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serverstatus.is_set || is_set(serverstatus.yfilter)) leaf_name_data.push_back(serverstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serverstatus")
    {
        serverstatus = value;
        serverstatus.value_namespace = name_space;
        serverstatus.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serverstatus")
    {
        serverstatus.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serverstatus")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Flash::Flash()
    :
    insertion{YType::empty, "insertion"},
    removal{YType::empty, "removal"}
{
    yang_name = "flash"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Flash::~Flash()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_data() const
{
    return insertion.is_set
	|| removal.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insertion.yfilter)
	|| ydk::is_set(removal.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insertion.is_set || is_set(insertion.yfilter)) leaf_name_data.push_back(insertion.get_name_leafdata());
    if (removal.is_set || is_set(removal.yfilter)) leaf_name_data.push_back(removal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insertion")
    {
        insertion = value;
        insertion.value_namespace = name_space;
        insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removal")
    {
        removal = value;
        removal.value_namespace = name_space;
        removal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insertion")
    {
        insertion.yfilter = yfilter;
    }
    if(value_path == "removal")
    {
        removal.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insertion" || name == "removal")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::FlexLinks()
    :
    status{YType::empty, "status"}
{
    yang_name = "flex-links"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::~FlexLinks()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_data() const
{
    return status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-links";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::FrameRelay()
    :
    multilink(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink>())
	,subif(nullptr) // presence node
{
    multilink->parent = this;

    yang_name = "frame-relay"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::~FrameRelay()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_data() const
{
    return (multilink !=  nullptr && multilink->has_data())
	|| (subif !=  nullptr && subif->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (subif !=  nullptr && subif->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink>();
        }
        return multilink;
    }

    if(child_yang_name == "subif")
    {
        if(subif == nullptr)
        {
            subif = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif>();
        }
        return subif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multilink != nullptr)
    {
        children["multilink"] = multilink;
    }

    if(subif != nullptr)
    {
        children["subif"] = subif;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multilink" || name == "subif")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::Multilink()
    :
    bundle_mismatch{YType::empty, "bundle-mismatch"}
{
    yang_name = "multilink"; yang_parent_name = "frame-relay";
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::~Multilink()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_data() const
{
    return bundle_mismatch.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_mismatch.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/frame-relay/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_mismatch.is_set || is_set(bundle_mismatch.yfilter)) leaf_name_data.push_back(bundle_mismatch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-mismatch")
    {
        bundle_mismatch = value;
        bundle_mismatch.value_namespace = name_space;
        bundle_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-mismatch")
    {
        bundle_mismatch.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-mismatch")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::Subif()
{
    yang_name = "subif"; yang_parent_name = "frame-relay";
}

Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::~Subif()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/frame-relay/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Ipsec()
    :
    too_many_sas{YType::empty, "too-many-sas"}
    	,
    cryptomap(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap>())
	,tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel>())
{
    cryptomap->parent = this;

    tunnel->parent = this;

    yang_name = "ipsec"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::~Ipsec()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_data() const
{
    return too_many_sas.is_set
	|| (cryptomap !=  nullptr && cryptomap->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(too_many_sas.yfilter)
	|| (cryptomap !=  nullptr && cryptomap->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (too_many_sas.is_set || is_set(too_many_sas.yfilter)) leaf_name_data.push_back(too_many_sas.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cryptomap")
    {
        if(cryptomap == nullptr)
        {
            cryptomap = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap>();
        }
        return cryptomap;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cryptomap != nullptr)
    {
        children["cryptomap"] = cryptomap;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "too-many-sas")
    {
        too_many_sas = value;
        too_many_sas.value_namespace = name_space;
        too_many_sas.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "too-many-sas")
    {
        too_many_sas.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cryptomap" || name == "tunnel" || name == "too-many-sas")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::Cryptomap()
    :
    add{YType::empty, "add"},
    attach{YType::empty, "attach"},
    delete_{YType::empty, "delete"},
    detach{YType::empty, "detach"}
{
    yang_name = "cryptomap"; yang_parent_name = "ipsec";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::~Cryptomap()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_data() const
{
    return add.is_set
	|| attach.is_set
	|| delete_.is_set
	|| detach.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(attach.yfilter)
	|| ydk::is_set(delete_.yfilter)
	|| ydk::is_set(detach.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cryptomap";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());
    if (detach.is_set || is_set(detach.yfilter)) leaf_name_data.push_back(detach.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detach")
    {
        detach = value;
        detach.value_namespace = name_space;
        detach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
    if(value_path == "detach")
    {
        detach.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "attach" || name == "delete" || name == "detach")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{
    yang_name = "tunnel"; yang_parent_name = "ipsec";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_data() const
{
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Isakmp()
    :
    policy(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy>())
	,tunnel(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel>())
{
    policy->parent = this;

    tunnel->parent = this;

    yang_name = "isakmp"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::~Isakmp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tunnel")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::Policy()
    :
    add{YType::empty, "add"},
    delete_{YType::empty, "delete"}
{
    yang_name = "policy"; yang_parent_name = "isakmp";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::~Policy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_data() const
{
    return add.is_set
	|| delete_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/isakmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add" || name == "delete")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::Tunnel()
    :
    start{YType::empty, "start"},
    stop{YType::empty, "stop"}
{
    yang_name = "tunnel"; yang_parent_name = "isakmp";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::~Tunnel()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_data() const
{
    return start.is_set
	|| stop.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(stop.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/isakmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.yfilter)) leaf_name_data.push_back(stop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop")
    {
        stop = value;
        stop.value_namespace = name_space;
        stop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "stop")
    {
        stop.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::Isdn()
    :
    call_information{YType::empty, "call-information"},
    chan_not_avail{YType::empty, "chan-not-avail"},
    ietf{YType::empty, "ietf"},
    layer2{YType::empty, "layer2"}
{
    yang_name = "isdn"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::~Isdn()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_data() const
{
    return call_information.is_set
	|| chan_not_avail.is_set
	|| ietf.is_set
	|| layer2.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(call_information.yfilter)
	|| ydk::is_set(chan_not_avail.yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(layer2.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isdn";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_information.is_set || is_set(call_information.yfilter)) leaf_name_data.push_back(call_information.get_name_leafdata());
    if (chan_not_avail.is_set || is_set(chan_not_avail.yfilter)) leaf_name_data.push_back(chan_not_avail.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (layer2.is_set || is_set(layer2.yfilter)) leaf_name_data.push_back(layer2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "call-information")
    {
        call_information = value;
        call_information.value_namespace = name_space;
        call_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chan-not-avail")
    {
        chan_not_avail = value;
        chan_not_avail.value_namespace = name_space;
        chan_not_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer2")
    {
        layer2 = value;
        layer2.value_namespace = name_space;
        layer2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "call-information")
    {
        call_information.yfilter = yfilter;
    }
    if(value_path == "chan-not-avail")
    {
        chan_not_avail.yfilter = yfilter;
    }
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "layer2")
    {
        layer2.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Isdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call-information" || name == "chan-not-avail" || name == "ietf" || name == "layer2")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::L2Tc()
    :
    sys_threshold{YType::empty, "sys-threshold"},
    threshold{YType::empty, "threshold"}
{
    yang_name = "l2tc"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::~L2Tc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::has_data() const
{
    return sys_threshold.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sys_threshold.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tc";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sys_threshold.is_set || is_set(sys_threshold.yfilter)) leaf_name_data.push_back(sys_threshold.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sys-threshold")
    {
        sys_threshold = value;
        sys_threshold.value_namespace = name_space;
        sys_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sys-threshold")
    {
        sys_threshold.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-threshold" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::L2Tun()
    :
    session{YType::empty, "session"}
    	,
    pseudowire(std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "l2tun"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::~L2Tun()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::has_data() const
{
    return session.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tun";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "session")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{
    yang_name = "pseudowire"; yang_parent_name = "l2tun";
}

Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::~Pseudowire()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/l2tun/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::License::License()
    :
    deploy{YType::empty, "deploy"},
    error{YType::empty, "error"},
    usage{YType::empty, "usage"}
{
    yang_name = "license"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::License::~License()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_data() const
{
    return deploy.is_set
	|| error.is_set
	|| usage.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deploy.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(usage.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::License::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deploy.is_set || is_set(deploy.yfilter)) leaf_name_data.push_back(deploy.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deploy")
    {
        deploy = value;
        deploy.value_namespace = name_space;
        deploy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::License::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deploy")
    {
        deploy.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deploy" || name == "error" || name == "usage")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::MacNotification()
    :
    change{YType::empty, "change"},
    move{YType::empty, "move"},
    threshold{YType::empty, "threshold"}
{
    yang_name = "mac-notification"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::~MacNotification()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_data() const
{
    return change.is_set
	|| move.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| ydk::is_set(move.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-notification";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());
    if (move.is_set || is_set(move.yfilter)) leaf_name_data.push_back(move.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "move")
    {
        move = value;
        move.value_namespace = name_space;
        move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
    if(value_path == "move")
    {
        move.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "move" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::MacNotification2()
    :
    change{YType::empty, "change"},
    move{YType::empty, "move"},
    threshold{YType::empty, "threshold"}
{
    yang_name = "mac-notification2"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::~MacNotification2()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_data() const
{
    return change.is_set
	|| move.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change.yfilter)
	|| ydk::is_set(move.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-notification2";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change.is_set || is_set(change.yfilter)) leaf_name_data.push_back(change.get_name_leafdata());
    if (move.is_set || is_set(move.yfilter)) leaf_name_data.push_back(move.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change")
    {
        change = value;
        change.value_namespace = name_space;
        change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "move")
    {
        move = value;
        move.value_namespace = name_space;
        move.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change")
    {
        change.yfilter = yfilter;
    }
    if(value_path == "move")
    {
        move.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "move" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Memory::Memory()
    :
    bufferpeak{YType::empty, "bufferpeak"}
{
    yang_name = "memory"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Memory::~Memory()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_data() const
{
    return bufferpeak.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bufferpeak.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bufferpeak.is_set || is_set(bufferpeak.yfilter)) leaf_name_data.push_back(bufferpeak.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferpeak")
    {
        bufferpeak = value;
        bufferpeak.value_namespace = name_space;
        bufferpeak.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferpeak")
    {
        bufferpeak.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferpeak")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Mpls()
    :
    vpn{YType::empty, "vpn"}
    	,
    fast_reroute(nullptr) // presence node
	,ldp(nullptr) // presence node
	,rfc(nullptr) // presence node
	,traffic_eng(nullptr) // presence node
{
    yang_name = "mpls"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::~Mpls()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_data() const
{
    return vpn.is_set
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (rfc !=  nullptr && rfc->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (rfc !=  nullptr && rfc->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "rfc")
    {
        if(rfc == nullptr)
        {
            rfc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc>();
        }
        return rfc;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(rfc != nullptr)
    {
        children["rfc"] = rfc;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute" || name == "ldp" || name == "rfc" || name == "traffic-eng" || name == "vpn")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::TrafficEng()
    :
    down{YType::empty, "down"},
    reroute{YType::empty, "reroute"},
    up{YType::empty, "up"}
{
    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_data() const
{
    return down.is_set
	|| reroute.is_set
	|| up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(reroute.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (reroute.is_set || is_set(reroute.yfilter)) leaf_name_data.push_back(reroute.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute")
    {
        reroute = value;
        reroute.value_namespace = name_space;
        reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "reroute")
    {
        reroute.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "reroute" || name == "up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::FastReroute()
    :
    protected_{YType::empty, "protected"}
{
    yang_name = "fast-reroute"; yang_parent_name = "mpls";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::~FastReroute()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_data() const
{
    return protected_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::Rfc()
    :
    ldp{YType::empty, "ldp"}
{
    yang_name = "rfc"; yang_parent_name = "mpls";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::~Rfc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_data() const
{
    return ldp.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rfc";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp.is_set || is_set(ldp.yfilter)) leaf_name_data.push_back(ldp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp")
    {
        ldp = value;
        ldp.value_namespace = name_space;
        ldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp")
    {
        ldp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::Ldp()
    :
    pv_limit{YType::empty, "pv-limit"},
    session_down{YType::empty, "session-down"},
    session_up{YType::empty, "session-up"},
    threshold{YType::empty, "threshold"}
{
    yang_name = "ldp"; yang_parent_name = "mpls";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::~Ldp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_data() const
{
    return pv_limit.is_set
	|| session_down.is_set
	|| session_up.is_set
	|| threshold.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pv_limit.yfilter)
	|| ydk::is_set(session_down.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pv_limit.is_set || is_set(pv_limit.yfilter)) leaf_name_data.push_back(pv_limit.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pv-limit")
    {
        pv_limit = value;
        pv_limit.value_namespace = name_space;
        pv_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pv-limit")
    {
        pv_limit.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pv-limit" || name == "session-down" || name == "session-up" || name == "threshold")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhrp()
    :
    nhc(nullptr) // presence node
	,nhp(nullptr) // presence node
	,nhs(nullptr) // presence node
	,quota_exceeded(nullptr) // presence node
{
    yang_name = "nhrp"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::~Nhrp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_data() const
{
    return (nhc !=  nullptr && nhc->has_data())
	|| (nhp !=  nullptr && nhp->has_data())
	|| (nhs !=  nullptr && nhs->has_data())
	|| (quota_exceeded !=  nullptr && quota_exceeded->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_operation() const
{
    return is_set(yfilter)
	|| (nhc !=  nullptr && nhc->has_operation())
	|| (nhp !=  nullptr && nhp->has_operation())
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (quota_exceeded !=  nullptr && quota_exceeded->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrp";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhc")
    {
        if(nhc == nullptr)
        {
            nhc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc>();
        }
        return nhc;
    }

    if(child_yang_name == "nhp")
    {
        if(nhp == nullptr)
        {
            nhp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp>();
        }
        return nhp;
    }

    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "quota-exceeded")
    {
        if(quota_exceeded == nullptr)
        {
            quota_exceeded = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded>();
        }
        return quota_exceeded;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nhc != nullptr)
    {
        children["nhc"] = nhc;
    }

    if(nhp != nullptr)
    {
        children["nhp"] = nhp;
    }

    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    if(quota_exceeded != nullptr)
    {
        children["quota-exceeded"] = quota_exceeded;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhc" || name == "nhp" || name == "nhs" || name == "quota-exceeded")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::Nhs()
{
    yang_name = "nhs"; yang_parent_name = "nhrp";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::~Nhs()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::Nhc()
{
    yang_name = "nhc"; yang_parent_name = "nhrp";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::~Nhc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhc";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::Nhp()
{
    yang_name = "nhp"; yang_parent_name = "nhrp";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::~Nhp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhp";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::QuotaExceeded()
{
    yang_name = "quota-exceeded"; yang_parent_name = "nhrp";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::~QuotaExceeded()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quota-exceeded";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Ospf()
    :
    cisco_specific(nullptr) // presence node
	,errors(nullptr) // presence node
	,lsa(nullptr) // presence node
	,retransmit(nullptr) // presence node
	,state_change(nullptr) // presence node
{
    yang_name = "ospf"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::~Ospf()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_data() const
{
    return (cisco_specific !=  nullptr && cisco_specific->has_data())
	|| (errors !=  nullptr && errors->has_data())
	|| (lsa !=  nullptr && lsa->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_specific !=  nullptr && cisco_specific->has_operation())
	|| (errors !=  nullptr && errors->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-specific")
    {
        if(cisco_specific == nullptr)
        {
            cisco_specific = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific>();
        }
        return cisco_specific;
    }

    if(child_yang_name == "errors")
    {
        if(errors == nullptr)
        {
            errors = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors>();
        }
        return errors;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_specific != nullptr)
    {
        children["cisco-specific"] = cisco_specific;
    }

    if(errors != nullptr)
    {
        children["errors"] = errors;
    }

    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-specific" || name == "errors" || name == "lsa" || name == "retransmit" || name == "state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::StateChange()
    :
    if_state_change{YType::empty, "if-state-change"},
    neighbor_state_change{YType::empty, "neighbor-state-change"},
    virtif_state_change{YType::empty, "virtif-state-change"},
    virtneighbor_state_change{YType::empty, "virtneighbor-state-change"}
{
    yang_name = "state-change"; yang_parent_name = "ospf";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::~StateChange()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_data() const
{
    return if_state_change.is_set
	|| neighbor_state_change.is_set
	|| virtif_state_change.is_set
	|| virtneighbor_state_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_state_change.yfilter)
	|| ydk::is_set(neighbor_state_change.yfilter)
	|| ydk::is_set(virtif_state_change.yfilter)
	|| ydk::is_set(virtneighbor_state_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_state_change.is_set || is_set(if_state_change.yfilter)) leaf_name_data.push_back(if_state_change.get_name_leafdata());
    if (neighbor_state_change.is_set || is_set(neighbor_state_change.yfilter)) leaf_name_data.push_back(neighbor_state_change.get_name_leafdata());
    if (virtif_state_change.is_set || is_set(virtif_state_change.yfilter)) leaf_name_data.push_back(virtif_state_change.get_name_leafdata());
    if (virtneighbor_state_change.is_set || is_set(virtneighbor_state_change.yfilter)) leaf_name_data.push_back(virtneighbor_state_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-state-change")
    {
        if_state_change = value;
        if_state_change.value_namespace = name_space;
        if_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state-change")
    {
        neighbor_state_change = value;
        neighbor_state_change.value_namespace = name_space;
        neighbor_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtif-state-change")
    {
        virtif_state_change = value;
        virtif_state_change.value_namespace = name_space;
        virtif_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtneighbor-state-change")
    {
        virtneighbor_state_change = value;
        virtneighbor_state_change.value_namespace = name_space;
        virtneighbor_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-state-change")
    {
        if_state_change.yfilter = yfilter;
    }
    if(value_path == "neighbor-state-change")
    {
        neighbor_state_change.yfilter = yfilter;
    }
    if(value_path == "virtif-state-change")
    {
        virtif_state_change.yfilter = yfilter;
    }
    if(value_path == "virtneighbor-state-change")
    {
        virtneighbor_state_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-state-change" || name == "neighbor-state-change" || name == "virtif-state-change" || name == "virtneighbor-state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::Errors()
{
    yang_name = "errors"; yang_parent_name = "ospf";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::~Errors()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::Retransmit()
    :
    packets{YType::empty, "packets"},
    virt_packets{YType::empty, "virt-packets"}
{
    yang_name = "retransmit"; yang_parent_name = "ospf";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::~Retransmit()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_data() const
{
    return packets.is_set
	|| virt_packets.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(virt_packets.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (virt_packets.is_set || is_set(virt_packets.yfilter)) leaf_name_data.push_back(virt_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virt-packets")
    {
        virt_packets = value;
        virt_packets.value_namespace = name_space;
        virt_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "virt-packets")
    {
        virt_packets.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "virt-packets")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::Lsa()
    :
    lsa_maxage{YType::empty, "lsa-maxage"},
    lsa_originate{YType::empty, "lsa-originate"}
{
    yang_name = "lsa"; yang_parent_name = "ospf";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::~Lsa()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_data() const
{
    return lsa_maxage.is_set
	|| lsa_originate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_maxage.yfilter)
	|| ydk::is_set(lsa_originate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_maxage.is_set || is_set(lsa_maxage.yfilter)) leaf_name_data.push_back(lsa_maxage.get_name_leafdata());
    if (lsa_originate.is_set || is_set(lsa_originate.yfilter)) leaf_name_data.push_back(lsa_originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage = value;
        lsa_maxage.value_namespace = name_space;
        lsa_maxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate = value;
        lsa_originate.value_namespace = name_space;
        lsa_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage.yfilter = yfilter;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-maxage" || name == "lsa-originate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::CiscoSpecific()
    :
    errdisable(nullptr) // presence node
	,errors(nullptr) // presence node
	,lsa(nullptr) // presence node
	,retransmit(nullptr) // presence node
	,state_change(nullptr) // presence node
{
    yang_name = "cisco-specific"; yang_parent_name = "ospf";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::~CiscoSpecific()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_data() const
{
    return (errdisable !=  nullptr && errdisable->has_data())
	|| (errors !=  nullptr && errors->has_data())
	|| (lsa !=  nullptr && lsa->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_operation() const
{
    return is_set(yfilter)
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (errors !=  nullptr && errors->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-specific";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "errors")
    {
        if(errors == nullptr)
        {
            errors = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors>();
        }
        return errors;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(errors != nullptr)
    {
        children["errors"] = errors;
    }

    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errdisable" || name == "errors" || name == "lsa" || name == "retransmit" || name == "state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::StateChange()
    :
    nssa_trans_change{YType::empty, "nssa-trans-change"}
    	,
    shamlink(nullptr) // presence node
{
    yang_name = "state-change"; yang_parent_name = "cisco-specific";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::~StateChange()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_data() const
{
    return nssa_trans_change.is_set
	|| (shamlink !=  nullptr && shamlink->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_trans_change.yfilter)
	|| (shamlink !=  nullptr && shamlink->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_trans_change.is_set || is_set(nssa_trans_change.yfilter)) leaf_name_data.push_back(nssa_trans_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shamlink")
    {
        if(shamlink == nullptr)
        {
            shamlink = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink>();
        }
        return shamlink;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shamlink != nullptr)
    {
        children["shamlink"] = shamlink;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-trans-change")
    {
        nssa_trans_change = value;
        nssa_trans_change.value_namespace = name_space;
        nssa_trans_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-trans-change")
    {
        nssa_trans_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shamlink" || name == "nssa-trans-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::Shamlink()
    :
    interface{YType::empty, "interface"},
    interface_old{YType::empty, "interface-old"},
    neighbor{YType::empty, "neighbor"}
{
    yang_name = "shamlink"; yang_parent_name = "state-change";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::~Shamlink()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_data() const
{
    return interface.is_set
	|| interface_old.is_set
	|| neighbor.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_old.yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shamlink";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/state-change/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_old.is_set || is_set(interface_old.yfilter)) leaf_name_data.push_back(interface_old.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-old")
    {
        interface_old = value;
        interface_old.value_namespace = name_space;
        interface_old.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-old")
    {
        interface_old.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-old" || name == "neighbor")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::Errors()
{
    yang_name = "errors"; yang_parent_name = "cisco-specific";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::~Errors()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::Errdisable()
    :
    notification_rate{YType::uint16, "notification-rate"}
{
    yang_name = "errdisable"; yang_parent_name = "cisco-specific";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::~Errdisable()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_data() const
{
    return notification_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notification_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_rate.is_set || is_set(notification_rate.yfilter)) leaf_name_data.push_back(notification_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-rate")
    {
        notification_rate = value;
        notification_rate.value_namespace = name_space;
        notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-rate")
    {
        notification_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::Retransmit()
{
    yang_name = "retransmit"; yang_parent_name = "cisco-specific";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::~Retransmit()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::Lsa()
    :
    lsa_maxage{YType::empty, "lsa-maxage"},
    lsa_originate{YType::empty, "lsa-originate"}
{
    yang_name = "lsa"; yang_parent_name = "cisco-specific";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::~Lsa()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_data() const
{
    return lsa_maxage.is_set
	|| lsa_originate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_maxage.yfilter)
	|| ydk::is_set(lsa_originate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_maxage.is_set || is_set(lsa_maxage.yfilter)) leaf_name_data.push_back(lsa_maxage.get_name_leafdata());
    if (lsa_originate.is_set || is_set(lsa_originate.yfilter)) leaf_name_data.push_back(lsa_originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage = value;
        lsa_maxage.value_namespace = name_space;
        lsa_maxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate = value;
        lsa_originate.value_namespace = name_space;
        lsa_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage.yfilter = yfilter;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-maxage" || name == "lsa-originate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pim::Pim()
    :
    invalid_pim_message{YType::empty, "invalid-pim-message"},
    neighbor_change{YType::empty, "neighbor-change"},
    rp_mapping_change{YType::empty, "rp-mapping-change"}
{
    yang_name = "pim"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pim::~Pim()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_data() const
{
    return invalid_pim_message.is_set
	|| neighbor_change.is_set
	|| rp_mapping_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalid_pim_message.yfilter)
	|| ydk::is_set(neighbor_change.yfilter)
	|| ydk::is_set(rp_mapping_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid_pim_message.is_set || is_set(invalid_pim_message.yfilter)) leaf_name_data.push_back(invalid_pim_message.get_name_leafdata());
    if (neighbor_change.is_set || is_set(neighbor_change.yfilter)) leaf_name_data.push_back(neighbor_change.get_name_leafdata());
    if (rp_mapping_change.is_set || is_set(rp_mapping_change.yfilter)) leaf_name_data.push_back(rp_mapping_change.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalid-pim-message")
    {
        invalid_pim_message = value;
        invalid_pim_message.value_namespace = name_space;
        invalid_pim_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-change")
    {
        neighbor_change = value;
        neighbor_change.value_namespace = name_space;
        neighbor_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-mapping-change")
    {
        rp_mapping_change = value;
        rp_mapping_change.value_namespace = name_space;
        rp_mapping_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalid-pim-message")
    {
        invalid_pim_message.yfilter = yfilter;
    }
    if(value_path == "neighbor-change")
    {
        neighbor_change.yfilter = yfilter;
    }
    if(value_path == "rp-mapping-change")
    {
        rp_mapping_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid-pim-message" || name == "neighbor-change" || name == "rp-mapping-change")
        return true;
    return false;
}

const Enum::YLeaf Native::Otv::Site::Default_::Otv_::Isis::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Site::Default_::Otv_::Isis::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Otv::Site::Otv_::Isis::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Site::Otv_::Isis::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::cbqos {0, "cbqos"};
const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::circuit {1, "circuit"};
const Enum::YLeaf Native::Snmp::Mib::Persist::PersistEnum::v3mibs {2, "v3mibs"};

const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::critical {0, "critical"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::informational {1, "informational"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::major {2, "major"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType::minor {3, "minor"};

const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion::Y_1 {0, "1"};
const Enum::YLeaf Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion::Y_2 {1, "2"};


}
}

